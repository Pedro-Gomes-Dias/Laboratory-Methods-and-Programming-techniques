//Nome:Pedro Gomes Dias - Matr�cula:11821ECP007 - Turma: VB

//3.1.3 Somat�rio e Produt�rio (vet3.c)

//Pe�a ao usu�rio 10 n�meros e armazene-os em um vetor. Retorne a soma dos n�meros (somat�ria) e o produto dos mesmos (produt�ria).

//Tabela 3 TESTES

//entrada(s)                     //sa�da esperada
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
	printf("\nA soma dos n�meros do vetor �: %d", soma);
	printf("\nO resultado da multiplica��o dos n�meros do vetor �: %d", prod);
	
	return 0;
}














