//Nome: Pedro Gomes Dias
//Matr�cula: 11821ECP007

//Exerc�cios(seq2.c)

//Receba do usu�rio o valor da base e da altura de um tri�ngulo e retorne a sua �rea.

//Tabela 2 TESTES
//entrada(s)	sa�da esperada
//5; 6	15.00
//10; 25	125.00
//12.5; 21.75	135.94

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	float b, h, a;
	printf("Digite o valor num�rico referente � base do tri�ngulo: ");
	scanf("%f", &b);
	printf("\nDigite o valor num�rico referente � altura do tri�ngulo: ");
	scanf("%f", &h);
	a = (b * h) / 2;
	printf("\nA �rea do tri�ngulo corresponde �: %.4f", a);
	scanf("%f", &a);
	getch();
	return 0;
}
