//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Copie o programa do laboratório passado (ite1.c) e modifique-o para que retorne o fatorial de números maiores do que 12. Detalhe, desta vez só chegaremos no 20.

//Table 8: TESTES
//entrada(s)	saída esperada
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
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	if(n >= 12)
	{
		for( ; n >= 1; --n)
		{
			r *= n;
		}
		printf("O fatorial do número informado é %d", r);
	}
	
	else
	{
		printf("\nO fatorial do número informado não existe.");
	}
	
	return 0;
}
