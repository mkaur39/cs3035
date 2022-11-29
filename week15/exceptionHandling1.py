def divide(x, y):
    result = None
    #none keyword represents an "empty" variable / an absence of a value
    #What if we did not create a variable result here? Or assign a numerical value to result?
    try:
        result = float(x) / float(y)
    except:
        print("Some kind of error has occurred!")
    return result
 

x = input("Please enter a dividend: ")
y = input("Please enter a divisor: ")
print(str(divide(x, y)))



