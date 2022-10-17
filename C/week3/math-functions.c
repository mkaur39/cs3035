/*math-functions.c: simple program to explore functions from C's Math library
 * Written by Manveen Kaur on September 7, 2022
 * Based on examples in "C How to Program, Harvey and Paul Deitel"
*/

/*NOTE: GCC doesn't link the Math library automatically when compiling. 
 * You might get a linker error while compiling this code using 'gcc math-functions.c'
 * Instead, use 'gcc math-functions.c -lm' 
 * Adding '-lm' tells our linker to link the library libm which represents the math library. 
 */

#include <stdio.h>
#include <math.h>

int main( void )
{
    double testVariable = 200.0;

    printf("Square Root of %0.2f is %5.2f", testVariable, sqrt(testVariable));

}

