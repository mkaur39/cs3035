/*Code example to explain structs
 * Created on 09/22/2022
 * For CS 3035
 */

#include<stdio.h>
#include<stdlib.h>

//Defining a struct
struct coordinates
{
    int lat,lon;
};

int main (void)
{
    //declare a pointer to the struct
    struct coordinates *coordinatesPtr;

    //allocate memory to it. 
    coordinatesPtr = malloc(sizeof(struct coordinates));

    coordinatesPtr->lat = 1;
    coordinatesPtr->lon = 2;
    
    printf("The coordinates are %d and %d\n", 
		    coordinatesPtr->lat, coordinatesPtr->lon);
   
    //free assigned memory
    free(coordinatesPtr); 
}
