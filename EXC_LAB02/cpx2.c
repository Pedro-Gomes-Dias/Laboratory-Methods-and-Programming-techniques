//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//3.4.2 Multiplica��o de complexo por seu conjugado (cpx2.c)

//Pe�a ao usu�rio a parte real e a parte imagin�ria de um n�mero complexo. Retorne o valor do n�mero multiplicado pelo seu conjugado.

#include<stdio.h>
#include<complex.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	double complex Z, Zconj, Zres;
	double a, b;
	printf("Digite a parte real de Z: ");
	scanf("%lf", &a);
	printf("\nDigite a parte imagin�ria de Z: ");
	scanf("%lf", &b);
	Z = a + b*I;
	Zconj = a - b*I;
	
	Zres = Z * Zconj;
	printf("\nZ * Zconj = %.lf", creal(Zres));
	
	return 0;
}
	
	
	
