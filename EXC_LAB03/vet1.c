//Nome:Pedro Gomes Dias - Matrícula:11821ECP007 - Turma: VB

//3.1.1 Média de 1000 números (vet1.c)

//Peça ao usuário um número inteiro não negativo. Crie um vetor com 10000 números aleatórios variando entre 0 e esse número (incluso). Ex. se o número for 5, o resultado aleatório deverá poder sortear: 0, 1, 2, 3, 4 ou 5. Faça o cálculo e retorne a média desses números.

//Fórmula da média: 

//µ=1/N?i=0 N-1 (xi)

//Tabela 1 TESTES

//entrada(s)         saída esperada
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
	printf("Digite um  número inteiro: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		vet[i] = i;
		soma = soma + vet[i];
	}
	media = (soma + num) / (num + 1);
	printf("\nA média da soma dos números de [0,num] é: %.2f", media);
	return 0;	
}

