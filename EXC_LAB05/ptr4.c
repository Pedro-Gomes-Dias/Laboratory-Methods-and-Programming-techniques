//Aluno: Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//Imprima endre�o e conte�do de mem�ria (ptr4.c)

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i, j, sum;
	int *a;
	
	printf("Valor de i: ");
	scanf("%i", &i);
	printf("\nValor de j: ");
	scanf("%i", &j);
	
	a = &i;
	printf("\nEndere�o de i: %p", a);
	printf("\nConte�do de i: %i", *a);
	
	a = &j;
	printf("\nEndere�o de j: %p", a);
	printf("\nConte�do de j: %i", *a);
	
	sum = i + j;
	a = &sum;
	printf("\nEndere�o da soma de i com j: %p", a);
	printf("\nConte�do da soma de i com j: %i", *a);
}
