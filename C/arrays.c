#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int luckyNumbers[] = {2, 4, 6, 8};
    char phrase[20] = "Array";

    luckyNumbers[0] = 1;
    printf("%d\n", luckyNumbers[0]);
    printf("%s\n", phrase);

    return 0;
}