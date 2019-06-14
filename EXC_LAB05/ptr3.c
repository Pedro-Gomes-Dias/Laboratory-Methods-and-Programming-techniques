//Aluno: Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Bytes de memória "carregados" (ptr3.c)

#include <stdio.h>

int main()
{
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	int i, *p;
	
	p = vetor;
	
	for(i = 0; i < 6; i++)
	{
		printf("%p\n", p + i);
	}
	
	printf("Total de bytes investigados: 13 ");
	
	return 0;
}
