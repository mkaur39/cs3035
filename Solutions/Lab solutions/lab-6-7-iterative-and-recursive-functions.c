/*Labs 6 and 7: Iterative and recursive functions for printing a fibonacci sequence.
 *Two important points to observe in this code:
 *FIRST:
 *This code uses a long long int return type for the fibiancci Recursive. 
 *With this, you may observe the range of an int vs. a long long int. 
 *SECOND:
 *This code also includes time values to help analyze whether the recursive function
 *to print a Fibonacci sequence runs faster than an iterative function or vice-versa.
 *
 *Solution by Stellina Ao CS 3035
*/ 


#include <stdio.h>
#include <time.h>

// declare the prototype
unsigned long long int fibonacciRecursive(unsigned long long int n);
void fibonacciIterative(unsigned long long int n);

/*function main begins program execution*/
int main(void) {
    // initialize variables
    int numValues = 45;
    time_t start1;
    time_t end1;
    double difference1;
    time_t start2;
    time_t end2;
    double difference2;

    // RECURSIVE FUNCTION

    // begin the timer
    time(&start1);

    // call recursive function fibonacciRecursive
    printf("fibonacciRecursive(%d): %llu", numValues, fibonacciRecursive(numValues));
    puts("");

    // end the timer
    time(&end1);

    // calculate the time it took
    difference1 = difftime(end1, start1);

    // ITERATIVE FUNCTION

    // begin the timer
    time(&start2);

    // call iterative function fibonacciIterative
    printf("fibonacci(%d): ", numValues);
    fibonacciIterative(numValues);
    puts("");

    // end the timer
    time(&end2);

    // calculate the time it took
    difference2 = difftime(end2, start2);


    // display the times
    printf("The recursive function took %f seconds\n", difference1);
    printf("The iterative function took %f seconds\n", difference2);


    return 0; //we return 0 if the program ends succesfully
} //end function main

unsigned long long fibonacciRecursive(unsigned long long n) {
  if (n == 1) { // base case 1: first number 0
    return 0;
  }

  if (n == 2) { // base case 2: second number 1
    return 1;
  }

  else { // recursive statement
    return(fibonacciRecursive(n-2) + fibonacciRecursive(n-1));
  }
}

void fibonacciIterative(unsigned long long n) {
  unsigned long long int first = 0;
  unsigned long long int second = 1;

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      printf("%llu", first);
    }
    else if (i == 1) {
      printf("%llu", second);
    }

    else {
      unsigned long long sum = first + second;
      printf("%llu", sum);
      first = second;
      second = sum;
    }

    if (i != n-1) {
      printf("%s", ", ");
    }
    else {
      puts("");
    }
  }
}

