#include<stdio.h>
#include<stdlib.h>

int main()
{
    // think of pointers as a type of data
    // a pointer is just a memory address
    int age = 30;
    int * pAge = &age;

    double gpa = 3.4;
    int * pGpa = &gpa;

    char grade = 'A';
    int * pGrade = &grade;

    printf("age's memory address: %p\n", &age);
    printf("stored in memory address: %d\n", *&age);

    return 0;
}  