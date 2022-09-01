/*while.c: simple program to evaluate the output of while loop
 * Written by Manveen Kaur on August 31, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

int main(void)
{

    int grade = 90;
 
    while (grade >= 80)
    {
	printf("%d", grade);
    }
}

