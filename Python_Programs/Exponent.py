base_number = int(input("Enter the base Number for Powering :"))
power_number = int(input("Enter the powering number :"))

def powering_num (num, pow):
    result = 1
    for index in range (pow):
        result *= num
    return result

print( powering_num (base_number, power_number))