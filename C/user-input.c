#include<stdio.h>
#include<stdlib.h>

int main()
{   
    /*int age;
    printf("Insert your age: ");
    scanf("%d", &age);
    printf("You're %d years old\n", age);

    double gpa;
    printf("Insert your gpa: ");
    scanf("%lf", &gpa);
    printf("You're %f years old\n", gpa);

    char grade;
    printf("Insert your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);*/

    char name[20];
    printf("Insert your name: ");
    //do not use scanf to get string, it will cut of the string after a space bar (use fgets)
    //scanf("%s", name);    
    fgets(name, 20, stdin);
    printf("Your name is %s", name);


    return 0;
}