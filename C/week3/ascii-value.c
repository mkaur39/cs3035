/*ascii-value.c: simple program that gives the ascii value of a character
 * Written by Manveen Kaur on September 5, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

/*function main begins program execution*/
int main( void )
{
    int inputChar;

    printf("Enter a character:");
    inputChar = getchar();

    printf("The character (%c) has the value %d.\n", inputChar, inputChar);
}

