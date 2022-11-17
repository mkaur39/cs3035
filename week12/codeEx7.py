def function1(testString):
    displayString = "Aloha"

    def function2():
        print(displayString)

    return function2

testFunction = function1("Hello")
print(testFunction)
testFunction()
testFunction()
testFunction()
