/*relationalOperators.c: simple program that evaluates conditional statements using relational operators
 * Written by Manveen Kaur on August 29, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

/*function main begins program execution*/
int main( void )
{
    int numInt1; //first number to be input by user
    int numInt2; //second number to be input by user   

    printf("Enter the first integer: "); //promt user to input integer
    scanf("%d", &numInt1 ); //read the integer

    printf("Enter the second integer: "); //promt user to input integer
    scanf("%d", &numInt2 ); //read the integer

    //the following if statements check the relationship
    //between the numbers that the user has input.

    if ( numInt1 == numInt2 )
    {
        printf("%d is equal to %d\n", numInt1, numInt2); //notice the use of two conversion specifiers
    } //end if

    if ( numInt1 != numInt2 )
    {
        printf("%d is not equal to %d\n", numInt1, numInt2);
    } //end if

    if (numInt1 < numInt2)
    {
	printf("%d is less than %d\n", numInt1, numInt2);
    } //end if 

    if (numInt1 > numInt2)
    {
        printf("%d is greater than %d\n", numInt1, numInt2);
    } //end if

  /*  
    if (numInt1 >= numInt2)
    {
        printf("%d is greater than or equal to %d\n", numInt1, numInt2);
    }
  */

    return 0; //we return 0 if the program ends succesfully
} //end function main


