/* This is the Lab 9 solution by Howard Nguyen.
*  It demonstrates the correct use of a swap in place function using:
*  pointers and a temp variable.
*/


/*Howard Nyugen
*
*/

#include<stdio.h>
 
void swap(int*, int*);
void swapPart2(int*, int);
 
int main() {
    int num1 = 10;
    int num2 = 20;
 
    printf("===== PART 1 ========================\n");
    printf("\n=====Before=====\n");
    printf("Num1: %d\nNum2: %d\n", num1, num2);
 
    swap(&num1, &num2);
 
    printf("=====After=====\n");
    printf("Num1: %d\nNum2: %d\n", num1, num2);
 
 
    const int SIZE = 3;
    int testArray[SIZE];
    testArray[0] = 1;
    testArray[1] = 3;
    testArray[2] = 2;
 
    printf("\n\n\n===== PART 2 ========================\n");
    printf("\n=====Before=====\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", testArray[i]);
 
    swapPart2(testArray, SIZE);
 
    printf("\n=====After=====\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", testArray[i]);
 
 
    return 0;
}
 
 
 
void swap(int* a, int* b) {
    int temp = *a;
 
    *a = *b;
    *b = temp;
}
 
 
 
void swapPart2(int* array, int SIZE) {
    //for each element compare to each element after it. Repeat SIZE times
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE - 1; ++j) {
            //if curValue is less then compared value, swap
            if ( array[j] > array[j + 1] )
                swap(&array[j], &array[j + 1]);
        }
    }
}
