//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//Copie o programa do laborat�rio passado (ite1.c) e modifique-o para que retorne o fatorial de n�meros maiores do que 12. Detalhe, desta vez s� chegaremos no 20.

//Table 8: TESTES
//entrada(s)	sa�da esperada
//5	            120
//15	        1307674368000
//20	        2432902008176640000

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL , "portuguese");
	int n, r = 1;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n);
	if(n >= 12)
	{
		for( ; n >= 1; --n)
		{
			r *= n;
		}
		printf("O fatorial do n�mero informado � %d", r);
	}
	
	else
	{
		printf("\nO fatorial do n�mero informado n�o existe.");
	}
	
	return 0;
}
