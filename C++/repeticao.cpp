/*
	Name: Repeticao.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:00
	Description: Programa para demonstrar laço de repetição
	             "Repita... até", "Do... while"
*/

#include <stdio.h>

main()
{
	int cont;
	cont = 0;
	
	do
	{
		puts("Teste de loop");
		cont = cont + 1;
	}while(cont < 10);	
}


