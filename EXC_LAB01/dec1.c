//Nome: Pedro Gomes Dias
//Matr�cula: 11821ECP007

//Exerc�cios(dec1.c)

//Receba um n�mero de um usu�rio e retorne mensagem sobre:

//dado se o n�mero � par, se o n�mero � m�ltiplo de 3 ou 7
//dado se o n�mero � �mpar, se o n�mero � m�ltiplo de 5
//Tabela 3 TESTES
//entrada(s)	sa�da esperada
//21	�mpar
//6	par; mult. 3 ou 7
//35	�mpar; mult. 5

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	if (a % 2 == 0 && a % 3 == 0 || a % 7 == 0){
		printf("O n�mero digitado � par e multiplo de 3 ou 7.");
	}
	else if (a % 2 == 1 && a % 5 == 0){
		printf("O n�mero digitado � �mpar e m�ltiplo de 5.");
		}
	else if (a % 2 == 0 && a % 3 != 0 || a % 7 != 0){
		printf("O n�mero digitado � par.");
	}
	else if (a % 2 == 1 && a % 5 != 0){
		printf("O n�mero digitado � �mpar.");
	}
	getch();
	return 0;	
}
