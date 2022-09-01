/*addIntegers.c: simple program that adds two integers
 * Written by Manveen Kaur on August 29, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

/*function main begins program execution*/
int main( void )
{
    int int1=0; //first number to be input by user
    int int2=0; //second number to be input by user
    int sum; //variable where sum will be stored

    printf("Enter the first integer:\n"); //promt user to input integer
    scanf("%d", &int1 ); //read the integer

    printf("Enter the second integer:\n"); //promt user to input integer
    scanf("%d", &int2 ); //read the integer

    sum = int1 + int2; //sum integers, assign total to variable sum

    printf("The sum is %d\n", int1 + int2); //print sum

    return 0; //we return 0 if the program ends succesfully
} //end function main


