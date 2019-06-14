//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Peça uma frase para o usuário (use a função fgets() ao invés da scanf()) e transforme todos os caracteres em minúsculas.

//Table 2: TESTES
//entrada(s)	        saída esperada
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
