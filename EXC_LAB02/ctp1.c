//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//3.1.1 De min�scula para mai�scula (ctp1.c)

//Pe�a uma frase para o usu�rio (use a fun��o fgets() ao inv�s da scanf()) e transforme todos os caracteres em mai�sculas.

//Table 1: TESTES
//entrada(s)	               sa�da esperada
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
