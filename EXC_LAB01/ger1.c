//Nome: Pedro Gomes Dias
//Matr�cula: 11821ECP007

//Exerc�cios(ger1.c)

//Receba do usu�rio um n�mero e verifique por "for�a bruta" se o mesmo � ou n�o um n�mero primo.

//Tabela 6 TESTES
//entrada(s)	sa�da esperada
//7	            primo
//121	        n�o � primo
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
	printf("Digite um n�mero maior que 0: ");
	scanf("%d", &a);
	b = a;
	for( ; b > 0; b--)
	{
		if( a % b == 0 && a != b || a == 1)
		{
		printf("\nO num�ro digitado n�o � primo.");
		break;
		}
		else if( b == 2)
		{
		printf("\nO n�mero digitado � primo.");
		break;
		}
	}
	getch();
	return 0; 
}
