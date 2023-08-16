print( "---------------------------------" )
print( "-------BINARY CALCULATOR---------" )

num1 = float(input("Enter First Number :"))
num2 = float(input("Enter Second Number :"))
op = input("Enter a Operator :")
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