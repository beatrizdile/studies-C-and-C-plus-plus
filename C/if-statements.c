#include<stdio.h>
#include<stdlib.h>

int max(int num1, int num2, int num3)
{
    int result;
    // using "and" statement
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main()
{     
    // using a function inside printf
    printf("%d\n", max(10, 40, 20));

    // using "or" statement
    if(3 > 2 || 2 > 5){
        printf("True\n");
    } else{
        printf("False\n");
    }

    // using "equal" and "different" statement
    if(2 == 2 && 3 != 2){
        printf("True\n");
    }
    
    // using negation operator with false statement
    if(!(3 > 5)){
        printf("Three is not greater than five\n");
    }

    return 0;
}