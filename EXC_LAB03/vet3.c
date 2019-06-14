//Nome:Pedro Gomes Dias - Matrícula:11821ECP007 - Turma: VB

//3.1.3 Somatório e Produtório (vet3.c)

//Peça ao usuário 10 números e armazene-os em um vetor. Retorne a soma dos números (somatória) e o produto dos mesmos (produtória).

//Tabela 3 TESTES

//entrada(s)                     //saída esperada
//-1 1 -1 1 -1 1 -1 1 -1 1       0; -1

//1 1 1 1 1 1 1 1 1 1           10; 1

//1 2 3 4 5 6 7 8 9 -1          44; -362880

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, soma, prod;
    int vet[10];
    for (a = 0;a<10;a++)
    {
    printf("Digite um numero\n");
    scanf("%d", &vet[a]);
    printf("\n");
    fflush(stdin);
    }
    for(a = 0, soma = 0, prod = 1; a < 10; a++)
    {
    	soma = soma + vet[a];
    	prod = prod * vet[a];
	}
	printf("\nA soma dos números do vetor é: %d", soma);
	printf("\nO resultado da multiplicação dos números do vetor é: %d", prod);
	
	return 0;
}














