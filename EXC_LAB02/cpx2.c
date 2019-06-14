//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//3.4.2 Multiplicação de complexo por seu conjugado (cpx2.c)

//Peça ao usuário a parte real e a parte imaginária de um número complexo. Retorne o valor do número multiplicado pelo seu conjugado.

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
	printf("\nDigite a parte imaginária de Z: ");
	scanf("%lf", &b);
	Z = a + b*I;
	Zconj = a - b*I;
	
	Zres = Z * Zconj;
	printf("\nZ * Zconj = %.lf", creal(Zres));
	
	return 0;
}
	
	
	
