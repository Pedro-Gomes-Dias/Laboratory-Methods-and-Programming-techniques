//Nome: Pedro Gomes Dias
//Matr�cula: 11821ECP007

//Exerc�cios(ite2.c)

//Receba do usu�rio dois n�meros inteiros, uma base B e uma pot�ncia P. Calcule o valor de BP (B elevado a P) e retorne esse resultado. Mesmo que voc� conhe�a, para este exerc�cio n�o use a fun��o pow().

//Tabela 5 TESTES
//entrada(s)	sa�da esperada
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
	printf("Digite um n�mero referente � base: ");
	scanf("%f", &b);
	printf("\nDigite um n�mero refente ao expoente: ");
	scanf("%f", &e);
	i = 1;
	pot = 1;
	while (i <= e)
	{
		pot = pot * b;
		i++;
	}
	printf("\nO resultado obtido equivale �: %.0f\n", pot);
	system("pause");
}
