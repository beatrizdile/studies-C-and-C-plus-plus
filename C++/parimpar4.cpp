/*
	Name: ParImpar4.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:26
	Description: Se o número for par, divida-o por 2;
	Caso o número seja ímpar, calcule o seu triplo;
	Se o número digitado for zero ou menor que, mostre que o número digitado é inválido
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	while (1)
	{
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if(num <= 0){
    	break;
	}
    
	if(num%2 == 0) 
      printf("\nSeu número dividido por dois: %d \n\n", num/2);
    else
      printf("\nSeu número multiplicado por três: %d \n\n", num*3);
	  	
    }
   
	puts("\nSeu número é inválido");
}
