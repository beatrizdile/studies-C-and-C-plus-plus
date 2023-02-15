#include<stdio.h>
#include<stdlib.h>

int main()
{
    int favNum = 90;
    char myChar = 'i';

    printf("Hello\nWorld\n");
    //print int
    printf("My favorite number is %d\n", 500); 
    //print string and then int
    printf("My favorite %s is %d\n", "number", 500); 
    //print string and then float
    printf("My favorite %s is %f\n", "number", 500.846); 
    //print string and then use int variable
    printf("My favorite %s is %d\n", "number", favNum); 
    //print string variable and then use int variable
    printf("My favorite %c is %d\n", myChar, favNum); 
    return 0;
}