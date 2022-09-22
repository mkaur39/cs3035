/*Code example to explain structs
 * Created on 09/22/2022
 * For CS 3035
 */

#include<stdio.h>

//Defining a struct
struct coordinates
{
    int lat,lon;
};

int main (void)
{
    //Declaring a struct variable and initializing it
    struct coordinates testCoordinates = {1, 1};

    //Printing the struct variable member values using dot operator
    printf("The coordinates are %d, %d\n", 
		    testCoordinates.lat, testCoordinates.lon);


    //Declaring a struct pointer to the struct variable testCoordinates
    struct coordinates *testCoordinatesPtr = &testCoordinates;

    //Printing the struct variable member using the struct pointer
    //and the arrow operator
    printf("The coordinates are %d, %d\n",
		    testCoordinatesPtr->lat, testCoordinatesPtr->lon);

    //Changing values of struct members...
    //
    //Using the struct variable testCoordinates
    testCoordinates.lat = 2;
    testCoordinates.lon = 3;

    printf("The coordinates are %d, %d\n",
                    testCoordinates.lat, testCoordinates.lon);

    //Using the pointer to the struct variable
    testCoordinatesPtr->lat = 4;
    testCoordinatesPtr->lon = 5;

    //What would this statement print now? 
    printf("The coordinates are %d, %d\n",
                    testCoordinates.lat, testCoordinates.lon);


}
