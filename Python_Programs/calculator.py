print( "---------------------------------" )
print( "-------BINARY CALCULATOR---------" )

num1 = float(input("Enter First Number :"))
op = input("Enter a Operator :")
num2 = float(input("Enter Second Number :"))

print( "---------------------------------" )
if op == "+":
    print( num1 + num2 )
elif op == "-":
    print( num1 - num2 )
elif op == "/":
    print( num1 / num2 )        
elif op == "*":
    print( num1 * num2 )
else :
    print( "Invalid Operator...")
print( "---------------------------------" )