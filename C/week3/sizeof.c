/*sizeof.c: simple program to check the size of each data type in C
 * Written by Manveen Kaur on September 7, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

#include <stdio.h>
#include<math.h>

int main( void )
{
    printf("Size of an unsigned int is %lu Bytes. Its range is 0 to %0.0f\n", 
		    sizeof(int), pow(2,sizeof(int)*8));

    printf("Size of an unsigned long int is %lu Bytes\n", sizeof(long int));
    printf("Size of a unsigned long long int is %lu Bytes\n", sizeof(long long int));
    printf("Size of a double is %lu Bytes\n", sizeof(double));
    printf("Size of a float is %lu Bytes\n", sizeof(float));
}

