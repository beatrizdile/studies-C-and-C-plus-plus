/*
	Name: Limite.cpp
	Author: Beatriz Dile
	Date: 18/03/22 09:43
	Description: Progrma para exibir uma contagem progressiva do limite inferior até atingir o limite superior
*/

# include <stdio.h> //StanDard Input Output
# include <conio.h> //CONsole Input Output
# include <locale.h>//Blibioteca para acentuação

main()
{
   setlocale(LC_ALL, "Portuguese");
   int a, x;
   a = x = 0;
 
  printf("Digite limite inferior: ");
  scanf("%d", &a);
  
  printf("\n\nDigite limite superior: ");
  scanf("%d", &x);
  
  
  for(a; a <= x; a++)
   printf("\n%d", a);
   

}//fim do main
