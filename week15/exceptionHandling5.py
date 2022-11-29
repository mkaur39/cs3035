def divide(x, y):
    result = None
    try:
        result = float(x) / float(y)
    except ZeroDivisionError:
        print("The divisor can not be 0!")
    except ValueError:
        print("A nonnumerical value was used!")
    except:
        print("An error occured!")
    else:
        print("Code executed with no error")
    return result
 

x = input("Please enter a dividend: ")
y = input("Please enter a divisor: ")
print(str(divide(x, y)))




