//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//Pe�a uma frase para o usu�rio (use a fun��o fgets() ao inv�s da scanf()) e conte quantas letras ele usou.

//Table 3: TESTES
//entrada(s)	    sa�da esperada
//Eu amo GoiaBADA	13
//Ahn?! Bom�	    6
//�oi---	        2

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	int i,c = 0;
	char tst[100];
	fgets(tst,100,stdin);
	for (i = 0 ; tst[i] !='\0' ; i++)
	{
		if(tst[i] >= 65 && tst[i] <= 90 || tst[i] >= 97 && tst[i] <= 122)
		{
			c = c + 1;
		}
	}
	printf("%d", c);
	
	return 0;
}
