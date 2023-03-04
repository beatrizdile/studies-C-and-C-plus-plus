#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 1;
    while(a <= 5){
        printf("%d\n", a);
        a++;
    }
    // code above and below are equivalent
    // three things inside the for:
    //(initialization; conditions; update)
    int i;
    for(i = 1; i <= 5; i++){
        printf("%d\n", i);
    }

    
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int b;
    for(b = 0; b <= 5; b++){
        printf("%d\n", luckyNumbers[b]);
    }


    return 0;
}