try :
    num = 10/0
    value = int(input("Enter a number :"))
    print(value)
except ValueError as error:
    print(error)
except ZeroDivisionError as div:
    print(div)
    