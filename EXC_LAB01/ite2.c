//Nome: Pedro Gomes Dias
//Matrícula: 11821ECP007

//Exercícios(ite2.c)

//Receba do usuário dois números inteiros, uma base B e uma potência P. Calcule o valor de BP (B elevado a P) e retorne esse resultado. Mesmo que você conheça, para este exercício não use a função pow().

//Tabela 5 TESTES
//entrada(s)	saída esperada
//5;2	        25
//8;4	        4096
//12;3	        1728

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL , "portuguese");
	float b, e, i , pot;
	printf("Digite um número referente à base: ");
	scanf("%f", &b);
	printf("\nDigite um número refente ao expoente: ");
	scanf("%f", &e);
	i = 1;
	pot = 1;
	while (i <= e)
	{
		pot = pot * b;
		i++;
	}
	printf("\nO resultado obtido equivale à: %.0f\n", pot);
	system("pause");
}
