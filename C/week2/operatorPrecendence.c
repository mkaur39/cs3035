/*operatorPrecedence.c: simple program that evaluates simple arithmetic expressions
 * Written by Manveen Kaur on August 29, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

/*function main begins program execution*/
int main( void )
{
    int a, b, c, d, e;  // variables we will use in our arithmetic expressions
    int result; //variable where we will store the result of our expression

    //assign values to variables
    a = 2;
    b = 4;
    c = 3;
    d = 7;
    e = 5;
   
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);

    //Expression 1:
   //  result = a + b * c;
   // result = (a + b) * c;
    //result = (a + b / c) * d;
    //result = ((a + b) / c) * d;
    //result = a / b * c % d;
    //result = a / b + c + c * e - e; 
    //result = (a / b) + c + (c * e) - e;

    printf("The result is: %d\n", result);
    
    return 0; //we return 0 if the program ends succesfully
} //end function main


