//Nome: Pedro Gomes Dias
//Matrícula: 11821ECP007

//Exercícios(dec1.c)

//Receba um número de um usuário e retorne mensagem sobre:

//dado se o número é par, se o número é múltiplo de 3 ou 7
//dado se o número é ímpar, se o número é múltiplo de 5
//Tabela 3 TESTES
//entrada(s)	saída esperada
//21	ímpar
//6	par; mult. 3 ou 7
//35	ímpar; mult. 5

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	printf("Digite um número: ");
	scanf("%d", &a);
	if (a % 2 == 0 && a % 3 == 0 || a % 7 == 0){
		printf("O número digitado é par e multiplo de 3 ou 7.");
	}
	else if (a % 2 == 1 && a % 5 == 0){
		printf("O número digitado é ímpar e múltiplo de 5.");
		}
	else if (a % 2 == 0 && a % 3 != 0 || a % 7 != 0){
		printf("O número digitado é par.");
	}
	else if (a % 2 == 1 && a % 5 != 0){
		printf("O número digitado é ímpar.");
	}
	getch();
	return 0;	
}
