/*ifElse.c: simple program to evaluate the output of if...else
 * Written by Manveen Kaur on August 31, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>

int main(void)
{

//Use this example to also show compound print statements...
    int grade = 90;

    if (grade >= 90)
        printf("A\n");
    else if (grade >= 80)
	printf("B\n");
    else if (grade >= 70)
        printf("C\n");
    else if (grade >= 60)
        printf("D\n");
    else
	printf("F\n");
}

