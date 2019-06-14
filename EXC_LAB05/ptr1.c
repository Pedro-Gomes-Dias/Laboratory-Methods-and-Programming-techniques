//Aluno: Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Investigando ponteiros (ptr1.c)

#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned int i = 0xFACA8421;
	int *p;
	
	p = &i;
	printf("\nEndereco de i: %p", p);
	printf("\nValor apontado por p: %i\n", *p);
	
	unsigned char *j = 'a';
	
	printf("\n%p\n", j);
	
	return 0;
}
