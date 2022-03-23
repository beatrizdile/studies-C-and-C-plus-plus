/*
	Name: For4.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:09
	Description: Programa para mostrar uma contagem regressiva usando for
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	
	printf("Digite um número para iniciar a contagem regressiva: ");
	scanf("%d", &num);
	
	for(num; num >= 0; num--)
   printf("\n%d", num);
	
	puts("\nSTART");	
}

