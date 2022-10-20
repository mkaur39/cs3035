/*Solution by Dexter Kale*/

#include <stdio.h>
#include <stdlib.h>

struct records {

    char name[20];
    int age;
    double gpa;
    
} record[5]; // structure template

int main (void) {

    struct records student[5]; // declare structure

    // fill in data for 5 students
    for (int i = 0; i < 5; i++) {
    
        printf("%s", "Input name: \n"); 
        scanf("%15s", student[i].name); 

        printf("%s", "Input age: \n"); 
        scanf("%d", &student[i].age); 

        printf("%s", "Input GPA: \n"); 
        scanf("%lf", &student[i].gpa);
   
    }

    // print all 5 students out
    for (int i = 0; i < 5; i++) { 
        printf("Student %d: %s, %d, %.1lf\n", i+1, student[i].name, 
            student[i].age, student[i].gpa);
    }

    return 0;
} // end of main
