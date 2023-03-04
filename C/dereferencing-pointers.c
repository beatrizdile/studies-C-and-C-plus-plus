#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("age's memory address: %p\n", &age);
    printf("pAge's stored memory address: %p\n", pAge);
    printf("dereferenced memory address: %d\n", *pAge);
    printf("dereferenced memory address: %d\n", *&age);

    return 0;
}