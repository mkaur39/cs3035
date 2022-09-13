//adding time to code in C
//

#include<stdio.h>
#include<time.h>

int main(void)
{
    time_t seconds_endLoop;
    time_t seconds_beginLoop;
    double timeDiff;

    time(&seconds_beginLoop);
 
    for (int i = 0; i < 100000000; i++)
    {
	//do nothing
    }
    
    time(&seconds_endLoop);

    timeDiff = difftime(seconds_endLoop, seconds_beginLoop);

    printf("Time the loop took is %f\n",timeDiff);
}
