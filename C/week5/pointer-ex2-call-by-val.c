// Fig. 7.6: fig07_06.c
// Cube a variable using pass-by-value.
// In CS 3035 ... we will convert this program to pass-by-reference
// The function cubeByRef will accept an integer pointer as an argument. 
// It will deference the pointer and cube the value that nPtr points to.
#include <stdio.h>

int cubeByValue(int *nPtr); // prototype  //c1

int main(void)
{
   int number = 5; // initialize number

   printf("The original value of number is %d", number);
   
   // pass number by value to cubeByValue
   cubeByValue(&number); //c2,c3

   printf("\nThe new value of number is %d\n", number);
} 

// calculate and return cube of integer argument                 
int cubeByValue(int *nPtr)                  //c4                          
{                                                                   
   *nPtr = *nPtr * *nPtr * *nPtr; // cube local variable n and return result //c5, c6
}
                            


/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
