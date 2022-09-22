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
    struct coordinates *coordinatesPtr;
    coordinatesPtr->lat = 1;
    coordinatesPtr->lon = 2;
}
