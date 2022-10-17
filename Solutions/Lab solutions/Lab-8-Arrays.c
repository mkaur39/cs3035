/*
 * matrix.c: Short program that prompts the user
 * for values in two different 3x3 matrices,
 * and then adds, subtracts, tranposes, and
 * multiplies the matrices together. Then it
 * prints out all the results respectively.
 *
*/

/* Solution submitted by Tommy Youn
 * One interesting feature used in this code is
 * using * to represent two-dimesional arrays in
 * function arguments in the function prototypes (lines #17 - 20).
 *
 * A two-dimensional array may be represented in any of the following ways in the function prototype:
 * 1. int arr_name[3][2] --- where 3 and 2 are the 'first' and 'second' dimension of the array
 * 2. int arr_name[][2]  --- where 2 is the 'second' dimension. It is not necessary to state the first dimesion.
 * 3. int arr_name[][*]  --- use a wildcard character * to represent the second dimesion. 
 *			 --- the actual function MUST include the correct numerical dimensions
 * 4. int [][*]		 --- no need to specify a variable name for the array
 * Any of the above options may chose to omit the variable name arr_name
 */
 
 
#include <stdio.h>

//prototypes
void matrixAdd(int[][*], int[][*], int[][*]);
void matrixSubtract(int[][*], int[][*], int[][*]);
void matrixTranspose(int[][*], int[][*]);
void matrixMultiply(int[][*], int[][*], int[][*]);

void getValues(int[][*]);
void printMatrix(int[][*]);

//initialize global variables for max rows and columns
const int MAX_ROWS = 3;
const int MAX_COLS = 3;

int main()
{
    //initialization
    int SUM[MAX_ROWS][MAX_COLS];
    int DIFF[MAX_ROWS][MAX_COLS];
    int TRANS[MAX_ROWS][MAX_COLS];
    int MULT[MAX_ROWS][MAX_COLS];

    int a[MAX_ROWS][MAX_COLS];
    int b[MAX_ROWS][MAX_COLS];

    //prompt user for values of matrices a and b
    printf("============\n");
    printf("  Matrix A\n");
    printf("============\n");

    getValues(a);

    printf("============\n");
    printf("  Matrix B\n");
    printf("============\n");

    getValues(b);

    printf("============\n");
    printf("     A\n");
    printf("============\n");
    
    printMatrix(a);

    printf("============\n");
    printf("     B\n");
    printf("============\n");

    printMatrix(b);


    //add both matrices together and print their sum
    printf("============\n");
    printf("   A + B\n");
    printf("============\n");

    matrixAdd(a, b, SUM);
    printMatrix(SUM);

    //subtract both matrices and print their difference
    printf("============\n");
    printf("   A - B\n");
    printf("============\n");

    matrixSubtract(a, b, DIFF);
    printMatrix(DIFF);

    //transpose matrix a
    printf("============\n");
    printf("Transpose A\n");
    printf("============\n");

    matrixTranspose(a, TRANS);
    printMatrix(TRANS);

    //multiply matrix a and b
    printf("============\n");
    printf("   A X B\n");
    printf("============\n");

    matrixMultiply(a, b, MULT);
    printMatrix(MULT);

    return 0;
}

void getValues(int a[][MAX_COLS])
{
    int i, j;
    int input;

    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            printf("Enter in the value for position %d of the matrix: ", (i * MAX_ROWS) + j);
            scanf("%d", &input);

            a[i][j] = input;
        } //end for loop
    } //end for loop
}

void printMatrix(int M[][MAX_COLS])
{
    int i, j;

    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            printf("%d ", M[i][j]);
        } //end for loop

        printf("\n");
    } //end for loop
}

void matrixAdd(int a[][MAX_COLS], int b[][MAX_COLS], int SUM[][MAX_COLS])
{
    int i, j;

    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            SUM[i][j] = a[i][j] + b[i][j];
        } //end for loop
    } //end for loop
}

void matrixSubtract(int a[][MAX_COLS], int b[][MAX_COLS], int DIFF[][MAX_COLS])
{
    int i, j;

    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            DIFF[i][j] = a[i][j] - b[i][j];
        } //end for loop
    } //end for loop
}

void matrixTranspose(int a[][MAX_COLS], int TRANS[][MAX_COLS])
{
    int i, j;

    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            TRANS[i][j] = a[j][i];
        } //end for loop
    } //end for loop
}

void matrixMultiply(int a[][MAX_COLS], int b[][MAX_COLS], int MULT[][MAX_COLS])
{
    int i, j;
    int k = 0;
    int tempSum = 0;

    for (i = 0; i < MAX_ROWS; i++)
    {
        for (j = 0; j < MAX_COLS; j++)
        {
            while (k < MAX_ROWS && k < MAX_COLS)
            {
                tempSum += a[i][k] * b[k][j];
                k++;
            }
            
            MULT[i][j] = tempSum;
            k = 0;
            tempSum = 0;
        } //end for loop
    } //end for loop
}
