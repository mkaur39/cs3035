/* Lab 5: Use nested loops to create a:
 * square
 * left-aligned triangle
 * right-aligned triangle
 * christmas tree
 * 
 * Original solution by Pierce Nance, CS 3035
*/

#include <stdio.h>


int main(void) 
{
//part A: square
  printf("Printing a square:\n");

	for(int i = 0; i <= 10; i++)
	{
	    for(int j = 0; j <= 10; j++)
	    {
		printf("*");
	    }
		
	printf("\n");
	}
        
	printf("\n\n");

//part B: left-aligned triangle
  printf("Printing a left-aligned triangle:\n");

	for(int i = 0; i <= 10; i++)
	{
	    for(int j = 0; j <= 10; j++)
	    {
		if (j <= i)
		{
		    printf("*");
		}
		else
		{
		    printf(" ");
		}
	    }
		
	    printf("\n");
	}
	
	printf("\n\n");


 //part C: right-aligned triangle
  printf("Printing a right-aligned triangle:\n");

	for(int i = 0; i <= 10; i++)
	{
	    for(int j = 0; j <= 10; j++)
	    {
		if (j <= i)
		{
		    printf(" ");
		}
		else
		{
		    printf("*");
		}
	    }
	    printf("\n");
	}
 //part D: christmas tree
  printf("Printing a christmas tree:\n");

	for(int i = 1; i <= 10; i++)
    	{
    	    for(int j = 1; j <= 10 - i; j++)
            {
            	printf(" ");
            }
            
	    for(int k = 1; k <= 2 * i - 1; k++)
            {
            	printf("*");
            }	
            printf("\n");
    	}
}




