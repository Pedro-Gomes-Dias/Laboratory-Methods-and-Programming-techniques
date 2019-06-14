//Nome: Pedro Gomes Dias
//Matrícula: 11821ECP007

//Exercícios(seq2.c)

//Receba do usuário o valor da base e da altura de um triângulo e retorne a sua área.

//Tabela 2 TESTES
//entrada(s)	saída esperada
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
	printf("Digite o valor numérico referente à base do triângulo: ");
	scanf("%f", &b);
	printf("\nDigite o valor numérico referente à altura do triângulo: ");
	scanf("%f", &h);
	a = (b * h) / 2;
	printf("\nA área do triângulo corresponde à: %.4f", a);
	scanf("%f", &a);
	getch();
	return 0;
}
