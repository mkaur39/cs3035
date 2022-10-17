/* This is the HW1 solution by Tommy Youn.
* This solution demonstrates all code components relevant for HW 2:
* 	*use of a struct
*	*using a correct function to calculate the 'n value'
*
* This code has additional features like multiple easy-to-call functions that make the code modular
* Struct variables use pointers in this code, however, you could define struct variables without 
* pointers also
* Error checking for always subtracting the smaller date from the larger date.
*/



/*  Name: Tommy Youn
 *
 *  daysElapsed: Prompts the user for
 *  two dates in the format <mm dd yyyy>
 *  and then returns the total number
 *  of days in between those days.
 *
*/


//headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//define structure Date
struct Date
{
    int month;
    int day;
    int year;
};

//define prototypes
void promptDates(struct Date *);
int orderDates(struct Date *);
int calcDaysBetween(struct Date *);
int checkYearCount(int, int);
int checkMonthCount(int);

//global constant variables
int NUM_DATES = 2;

int main(void)
{
    struct Date *dates;
    int daysElapsed;

    dates = malloc(NUM_DATES * sizeof(struct Date));

    //prompt user input for dates using format <mm dd yyyy>
    //NOTE: this assumes the input is in the correct format
    //but will also check if the month and days are valid
    //as well as if the date is after May 1, 1990
    promptDates(dates);

    //order dates such that dates[0] < dates[1] chronologically
    orderDates(dates);

    //calculate the days elapsed from dates[0] to dates[1]
    daysElapsed = calcDaysBetween(dates);

    //print out the days elapsed
    printf("The total of days elapsed between the dates is: %d\n", daysElapsed);

    //free up memory allocation
    free(dates);

    return 0;
}

void promptDates(struct Date *dates)
{
    int errorCheck;

    for(int i = 0; i < NUM_DATES; i++)
    {
        printf("Enter in a date (<mm dd yyyy>): ");
        scanf("%d %d %d", &(dates[i].month), &(dates[i].day), &(dates[i].year));

        //check for a valid month
        if (dates[i].month > 12)
        {
            printf("Please enter in a valid month.\n");
            i--;
            continue;
        }

        //check for a valid day (not including months
        //with 28, 29, or 30 days)
        if (dates[i].day > 31)
        {
            printf("Please enter in a valid day.\n");
            i--;
            continue;
        }

        //checks the date is before May 1, 1990
        if (dates[i].year < 1990 && dates[i].month < 5)
        {
            printf("Please enter a date later than March 1, 1990.\n");
            i--;
            continue;
        }
    }
}

int orderDates(struct Date *dates)
{
    int tempDay, tempMonth, tempYear;

    //check if the first date in the array is earlier
    if (dates[0].year < dates[1].year)
        return 0;

    if (dates[0].month < dates[1].month)
        return 0;

    if (dates[0].day < dates[1].day)
        return 0;

    //the first date in the array is later, so swap them
    tempDay = dates[0].day;
    tempMonth = dates[0].month;
    tempYear = dates[0].year;

    dates[0].day = dates[1].day;
    dates[0].month = dates[1].month;
    dates[0].year = dates[1].year;

    dates[1].day = tempDay;
    dates[1].month = tempMonth;
    dates[1].year = tempYear;

    return 0;
}

int calcDaysBetween(struct Date *dates)
{
    int n2, n1;

    //declare constant values once that are used in the given formula
    static int DAYS_LEAP_YEAR = 1461;
    static int DAYS_AVG_MONTH = 153;

    //assign n2 and n1 to the final result from the given formula
    n2 = (DAYS_LEAP_YEAR * (checkYearCount(dates[1].year, dates[1].month) / 4)) + (DAYS_AVG_MONTH * checkMonthCount(dates[1].month) / 5) + dates[1].day;
    n1 = (DAYS_LEAP_YEAR * (checkYearCount(dates[0].year, dates[0].month) / 4)) + (DAYS_AVG_MONTH * checkMonthCount(dates[0].month) / 5) + dates[0].day;

    return n2 - n1;
}

//piecewise function definition used in the given formula
int checkYearCount(int year, int month)
{
    if (month <= 2)
        return year-1;
    else
        return year;
}

//piecewise function definition used in the given formula
int checkMonthCount(int month)
{
    if (month <= 2)
        return month + 13;
    else
        return month + 1;
}


