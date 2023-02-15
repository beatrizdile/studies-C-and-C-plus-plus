/*
	Name: ParImpar.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:26
	Description: Programa para identificar quando um número é par ou ímpar por meio de uma operação de módulo
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	num = 0;
	
	while(1)
	{
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num%2 == 0)
      puts("PAR");
    else
      puts("ÍMPAR");	
    }
}
