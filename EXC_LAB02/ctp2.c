//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//Pe�a uma frase para o usu�rio (use a fun��o fgets() ao inv�s da scanf()) e transforme todos os caracteres em min�sculas.

//Table 2: TESTES
//entrada(s)	        sa�da esperada
//Eu amo GoiaBADA	    eu amo goiabada
//ADRIAN!!! SOU EU!	    adrian!!! sou eu!
//Minha Casa, Bonita	minha casa, bonita

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
		if(tst[i] > 64 && tst[i] < 91)
		{
			tst[i]+=32;
		}
	}
	printf("%s", tst);
	
	return 0;
}
