/* This is the Lab 9 solution by Javier Solorio.
*  It demonstrates the correct use of a swap WITHOUT USING a temp variable. 
*  This was an interesting solution so I added it to the solution repository.
*/

/* Javier Solorio
 * CS 3035
 * Lab 9
 * The intention of this program is to swap two 
 * integers using pointers and a swap function.
*/
#include <stdio.h>


void swap(int *x,int *y);
int main( void ){
int num1,num2;
printf("Please enter your first integer: ");
scanf("%d",&num1);
printf("Please enter your second integer: ");
scanf("%d",&num2);
printf("The unswapped numbers are: %d  %d \n",num1,num2);
swap(&num1,&num2);

printf("The swapped integers are: %d  %d \n",num1,num2);
return 0;
}
void swap(int *x,int *y){

*x=*x+*y;
*y=*x-*y;
*x=*x-*y;

}
