//check size of a pointer
//
#include<stdio.h>
#include<stdlib.h>

int main( void)
{
   int a;
   char b;
   int *aPtr;
   aPtr = &a;

   printf("%ld",sizeof(aPtr));
}
