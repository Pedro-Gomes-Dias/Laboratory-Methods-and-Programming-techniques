//Aluno: Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Ponteiros e strings I (ptr6.c)

#include <stdio.h>
#include <locale.h>

int main()
{
	int i, *p;
	char frase[10];
	fgets(frase, 10 ,stdin);
	
	p = frase;
	for(i = 0; i < strlen(frase); i++)
	{
		printf("%i ", p[i]);
	}
	
	return 0;
}
