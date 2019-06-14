//Nome: Pedro Gomes Dias
//Matrícula: 11821ECP007

//Exercícios(ger1.c)

//Receba do usuário um número e verifique por "força bruta" se o mesmo é ou não um número primo.

//Tabela 6 TESTES
//entrada(s)	saída esperada
//7	            primo
//121	        não é primo
//313	        primo

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL , "portuguese");
	int a, b;
	printf("Digite um número maior que 0: ");
	scanf("%d", &a);
	b = a;
	for( ; b > 0; b--)
	{
		if( a % b == 0 && a != b || a == 1)
		{
		printf("\nO numéro digitado não é primo.");
		break;
		}
		else if( b == 2)
		{
		printf("\nO número digitado é primo.");
		break;
		}
	}
	getch();
	return 0; 
}
