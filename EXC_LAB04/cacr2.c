//Nome: Pedro Gomes Dias - Matrícula: 11821ECP007 - Turma: VB

/*3.4.2 Encontre as raízes da função quadrática (cacr2.c)
Dados os coeficientes reais a a , b b  e c c  da equação quadrática y=ax2+bx+c y = a x 2 + b x + c , encontre todas as raízes da função. Para isso, crie uma função que calcule o delta da equação:

?=b2-4ac ? = b 2 - 4 a c

e outra que calcule as raízes:

se ?>0 ? > 0 , raiz1 = -b+?--v2a - b + ? 2 a ; raiz2 = -b-?--v2a - b - ? 2 a
se ?=0 ? = 0 , raiz1 = raiz2 = -b2a - b 2 a
se ?<0 ? < 0 , raiz1 = raiz2 = NAN; indique que não existe raiz real nesse caso.
Table 6: TESTES
entrada(s)	saída esperada
1, -5, 6	2, 3
2, 4, 2	-1, -1
1, 2, 3	NAN, NAN (nao existe raiz real)*/

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

int main()
{
	int a, b, c, delta;
	float raiz, raiz1, raiz2;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o coeficiente (a): ");
	scanf("%d", &a);
	printf("\nDigite o coeficiente (b): ");
	scanf("%d", &b);
	printf("\nDigite o coeficiente (c): ");
	scanf("%d", &c);
	delta = sqrt(b * b - 4 * a * c);
	if(delta > 0)
	{
		raiz1 = (- b + delta) / (2 * a);
		raiz2 = (-b - delta) / (2 * a);
		printf("x1= %f", raiz1);
		printf("\nx2= %f", raiz2);
	}
	else if(delta = 0)
	{
		raiz = (- b) / (2 * a);
		printf("x= %f", raiz);
	}
	else
	{
		printf("raiz1 = raiz2 = NAN");
	}
	return 0;
}
