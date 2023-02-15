/*
	Name: Idades.cpp
	Author: Beatriz Dile
	Date: 23/03/22 12:48
	Description: Programa para classificar a faixa etária
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade;
	idade = 0;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if(idade <= 12)
	     puts("Você é uma criança!");
	else if(idade <= 19)
	         puts("Você é um adolescente!");
	     else if(idade <= 59)
	            puts("Você é um adulto!");
			  else
			      puts("Você é idoso!");  
}



