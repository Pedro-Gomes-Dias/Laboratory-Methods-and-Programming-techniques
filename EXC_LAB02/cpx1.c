//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//3.4.1 Soma de complexos (cpx1.c)

//Peça ao usuário a parte real e a parte imaginária de dois números complexos. Retorne a soma deles.

#include<stdio.h>
#include<complex.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	double complex Z1, Z2, Z3;
	double a, b, c, d;
	printf("Digite a partel real de Z1: ");
	scanf("%lf", &a);
	printf("\nDigite a parte imaginária de Z1: ");
	scanf("%lf", &b);
	Z1 = a + b*I;
	printf("\nDigite a parte real de Z2: ");
	scanf("%lf", &c);
	printf("\nDigite a parte imaginária de Z2: ");
	scanf("%lf", &d);
	Z2 = c + d*I;
	
	Z3 = Z1 + Z2;
	printf("%.lf + %.lf*I\n", creal(Z3), cimag(Z3));
	
	return 0;	
}
