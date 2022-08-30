/*arithmeticOperations.c: simple program that performs various arithmetic operations on integers
 * Written by Manveen Kaur on August 29, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

/*function main begins program execution*/
int main( void )
{
    int numInt1; //first number to be input by user
    int numInt2; //second number to be input by user

    int sum, product, division, modulo; //variables where the result will be stored
    

    printf("Enter the first integer: "); //promt user to input integer
    scanf("%d", &numInt1 ); //read the integer

    printf("Enter the second integer: "); //promt user to input integer
    scanf("%d", &numInt2 ); //read the integer
 
    printf("Sum: %d\n", numInt1 + numInt2); //print sum
    printf("Product: %d\n", numInt1 * numInt2); //print product
    printf("Division: %d\n", numInt1 / numInt2); //print result of division
    printf("Remainder: %d\n", numInt1 % numInt2); //print result of modulo operator

    return 0; //we return 0 if the program ends succesfully
} //end function main


