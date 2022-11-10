# Python program to illustrate functions 
# can be passed as arguments to other functions 
def add(a,b): 
    return a + b
  
def mul(a,b): 
    return a * b
  
def calc(func): 
    # storing the function in a variable 
    solution = func(10,12) 
    print(solution)
  
calc(add)
calc(mul)
