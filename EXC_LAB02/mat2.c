//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//3.2.2 Lei dos cossenos (mat2.c)
//Pe�a ao usu�rio o valor de dois (b b , c c ) dos tr�s lados de um tri�ngulo, al�m do �ngulo A^ A ^  que eles formam (em radianos). Retorne o valor do outro lado (a a ) que falta.

//a=b2+c2-2bccos(A^)-----------------v
//a = b 2 + c 2 - 2 b c cos ? ( A ^ )
//Table 5: TESTES
//entrada(s)	     sa�da esperada
//3, 4, 1.5708	     5
//7, 7, 0.78540	     5.3576
//0.75, 10, 0.39270	 9.3115

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float b, c, a, A;
	printf("Digite o valor referente ao lado b do tri�ngulo: ");
	scanf("%f", &b);
	printf("\nDigite o valor referente ao lado c do tri�ngulo: ");
	scanf("%f", &c);
	printf("\nDigite o valor (em radianos) do �ngulo existente entre os lados b e c do tri�ngulo: ");
	scanf("%f", &A);
	a = sqrt(pow(b,2) + pow(c,2) - 2 * b * c * cos(A));
	printf("\nO valor do lado a � igual: %f", a);
	
	return 0;		
}
