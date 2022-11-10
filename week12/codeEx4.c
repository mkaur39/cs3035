#include <stdio.h>

//a function printNumber
//prints the number passed as a parameter
void printNumber(int nbr)  
{
    printf("%d\n", nbr);
}


//a function myFunction
//parameter f is a pointer to a function 
//	which takes a single int as a parameter
//	returns a void
void myFunction(void (*f)(int))  
{
    for(int i = 0; i < 5; i++) 
    {
        (*f)(i);  //here we are calling the funtion reprented by f with the variable i
    }
}


int main(void)  
{
    myFunction(printNumber);
    return (0);
}
