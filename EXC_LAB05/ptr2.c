//Aluno: Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Bytes de memória "nulos" (ptr2.c)

#include <stdio.h>

int main()
{
	int vetor[] = {0,1,2,4,8,16,1025};
	int i, *p;
	
	p = vetor;
	
	for(i = 0; i < 7; i++)
	{
		printf("%p\n", p + i);
	}
	
	printf("\nTotal de bytes investigados: 21 ");
	
	return 0;
}
