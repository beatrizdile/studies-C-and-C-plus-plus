#include<stdio.h>
#include<stdlib.h>

int main() 
{   
    //const = unchangeable (UPPER CASE NAMES FOR CONSTS)
    const int FAV_NUM = 5;
    printf("%d\n", FAV_NUM);

    FAV_NUM = 8;
    printf("%d\n", FAV_NUM);

    return 0;
}
