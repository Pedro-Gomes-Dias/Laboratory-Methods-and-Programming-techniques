//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//3.1.1 De minúscula para maiúscula (ctp1.c)

//Peça uma frase para o usuário (use a função fgets() ao invés da scanf()) e transforme todos os caracteres em maiúsculas.

//Table 1: TESTES
//entrada(s)	               saída esperada
//Eu amo GoiaBADA	           EU AMO GOIABADA
//meu nome fica escondido	   MEU NOME FICA ESCONDIDO
//XOxoXO	                   XOXOXO

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	int i;
	char tst[100];
	fgets(tst,100,stdin);
	for (i = 0 ; tst[i] !='\0' ; i++)
	{
		if(tst[i] > 96 && tst[i] < 123)
		{
			tst[i]-=32;
		}
			
	}
	printf("%s", tst);
	
	return 0;
}
