/*Example of weak typing in C
 */

#include<stdio.h>

int main (void)
{
    int x = 5;
    char* name = "Bob";
    
//    int comb = x + name;
    int comb = x + (float)((int)name);

    printf("%d",comb);
}
