/*
	Name: Regressivo.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:09
	Description: Programa para mostrar uma contagem regressiva usando while
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num = 0;
	
	printf("Digite um número para iniciar a contagem regressiva: ");
	scanf("%d", &num);
	
	while(num >= 0)
	{
		printf("%d\n", num);
		num = num - 1;
	}
	puts("START");	
}


