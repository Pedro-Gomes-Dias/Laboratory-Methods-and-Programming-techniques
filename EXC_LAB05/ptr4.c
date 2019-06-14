//Aluno: Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Imprima endreço e conteúdo de memória (ptr4.c)

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
	printf("\nEndereço de i: %p", a);
	printf("\nConteúdo de i: %i", *a);
	
	a = &j;
	printf("\nEndereço de j: %p", a);
	printf("\nConteúdo de j: %i", *a);
	
	sum = i + j;
	a = &sum;
	printf("\nEndereço da soma de i com j: %p", a);
	printf("\nConteúdo da soma de i com j: %i", *a);
}
