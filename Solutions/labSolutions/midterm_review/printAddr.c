// a printAddress function that accepts an argument by reference

#include<stdio.h>

void printAddr(int *a);


int main()
{
  int a = 10;

  printf("Address of a in the main function is %p\n",&a);

  printAddr(&a);

  return 0;
}

void printAddr(int *a)
{
  printf("Address of a in the print function is  %p\n",a);
}

