//Aluno: Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Ponteiros e strings II (ptr7.c)

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int vetor[4] = {0,0,0,0};
	int a, b, c, d, i;
	int *p;
	
	printf("Digite quatro números: ");
	scanf("%i %i %i %i", &a, &b, &c, &d);
	
	vetor[1] = a;
	vetor[2] = b;
	vetor[3] = c;
	vetor[4] = d;
	
	p = vetor;
	printf(" %p %p %p %p", p[1], p[2], p[3], p[4]);

	return 0;
}
