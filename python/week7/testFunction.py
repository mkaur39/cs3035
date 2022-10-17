# A simple test function in Python
# NOTE: REMEMBER TO INDENT YOUR CODE!!!


#sys provides access to some system-level variables maintained by the interpeter
import sys

# a function to multiply two values:
def mul(num1, num2):
 return num1*num2

# the 'main' point at which code execution will start:
def main():
    
 num1 = float(input('Enter the first number'))
    num2 = float(input('Enter the second number'))

    print("First number: " +  str(num1))
    print("Second number: " + str(num2))
    
    answer = mul(num1, num2)
    
    print("Multiplication of " + str(num1) + " with " + str(num2) +" equals "+ str(answer))

#The following stamements indicate that the starting point of our execution is main. 
#We will discuss them in more detail over the next week. 

if __name__=="__main__":
    sys.exit(main())

