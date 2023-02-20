#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num1;
    float num2;
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Answer: %f", num1 + num2);

    return 0;
}