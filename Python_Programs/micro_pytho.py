import machine
from machine import Pin, PWM
import time
import adafruit_pn532.i2c as PN532_I2C

# Define motor control pins
MOTOR_PIN_1 = Pin(2, Pin.OUT)  # Example GPIO pin for controlling motor direction
MOTOR_PIN_2 = Pin(3, Pin.OUT)  # Example GPIO pin for controlling motor direction
MOTOR_PWM_PIN = 15  # Example GPIO pin for motor PWM control

# Initialize motor PWM
motor_pwm = PWM(Pin(MOTOR_PWM_PIN))
motor_pwm.freq(1000)  # Set PWM frequency

# Create an I2C object
i2c = machine.I2C(0, scl=machine.Pin(9), sda=machine.Pin(8))  # Adjust pins based on your connections

# Create an instance of the PN532 class
pn532 = PN532_I2C.PN532(i2c)

# Configure PN532 to communicate with NFC cards and tags
pn532.SAM_configuration()

def read_ticket_info():
    # Wait for an NFC tag
    print("Waiting for NFC tag...")
    while not pn532.read_passive_target():
        pass

    # Read NFC tag
    uid = pn532.get_uid()
    print("Found NFC tag with UID:", [hex(i) for i in uid])

    # Here you would process the ticket information from the NFC tag
    # For demonstration, let's assume ticket count is stored as a block of data on the tag
    # You would need to adjust this part based on how your ticket information is stored
    
    ticket_count = 0  # Placeholder for ticket count
    # For example, if ticket count is stored in block 4
    ticket_count_block = 4
    data = pn532.mifare_classic_read_block(ticket_count_block)
    ticket_count = int.from_bytes(data, "big")
    
    return ticket_count

def rotate_motor(ticket_count):
    # Rotate the motor based on the ticket count
    if ticket_count > 0:
        # Rotate motor forward
        MOTOR_PIN_1.on()
        MOTOR_PIN_2.off()
        motor_pwm.duty(512)  # Adjust PWM duty cycle as needed for your motor
        time.sleep(2)  # Adjust duration of rotation as needed
        motor_pwm.duty(0)  # Stop motor
    else:
        print("No tickets remaining. Motor not rotated.")

# Main loop
while True:
    ticket_count = read_ticket_info()
    print("Ticket count:", ticket_count)
    rotate_motor(ticket_count)
    time.sleep(5)  # Adjust the interval between reading NFC tags
