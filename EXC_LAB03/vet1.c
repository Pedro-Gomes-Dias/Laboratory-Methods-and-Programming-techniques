//Nome:Pedro Gomes Dias - Matr�cula:11821ECP007 - Turma: VB

//3.1.1 M�dia de 1000 n�meros (vet1.c)

//Pe�a ao usu�rio um n�mero inteiro n�o negativo. Crie um vetor com 10000 n�meros aleat�rios variando entre 0 e esse n�mero (incluso). Ex. se o n�mero for 5, o resultado aleat�rio dever� poder sortear: 0, 1, 2, 3, 4 ou 5. Fa�a o c�lculo e retorne a m�dia desses n�meros.

//F�rmula da m�dia: 

//�=1/N?i=0 N-1 (xi)

//Tabela 1 TESTES

//entrada(s)         sa�da esperada
//10                   em torno de 5.0

//30                   em torno de 15.0
 
//100                  em torno de 50.0

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main ()
{
	setlocale(LC_ALL, "portuguese");
	int num, i, soma = 0;
	float media;
	char vet[10000];
	printf("Digite um  n�mero inteiro: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		vet[i] = i;
		soma = soma + vet[i];
	}
	media = (soma + num) / (num + 1);
	printf("\nA m�dia da soma dos n�meros de [0,num] �: %.2f", media);
	return 0;	
}

