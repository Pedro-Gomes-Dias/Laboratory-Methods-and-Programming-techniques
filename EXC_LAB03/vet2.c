//Nome:Pedro Gomes Dias - Matrícula:11821ECP007 - Turma: VB

//3.1.2 Reverso do vetor (vet2.c)

//Faça um programa que peça ao usuário 10 números e armazene-os em um vetor. Em seguida, apresente o reverso desse vetor. Em outras palavras, troque o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 6º com o 6º e mostre o vetor modificado.

//Tabela 2 TESTES

//entrada(s)               //saída esperada
//1 2 3 4 5 6 7 8 9 0        0 9 8 7 6 5 4 3 2 1

//2 2 2 3 3 3 4 4 4 5        5 4 4 4 3 3 3 2 2 2

//9 8 7 6 5 4 3 2 1 0        0 1 2 3 4 5 6 7 8 9

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
    int a, b;
    int vet[10];
    for (a = 0;a<10;a++)
    {
    printf("Digite um número\n");
    scanf("%d", &vet[a]);
    printf("\n");
    fflush(stdin);
    }
    for (b = 9; b >= 0; b--)
    {
        printf("%d\n", vet[b]);
    }
    
	return 0;
}



