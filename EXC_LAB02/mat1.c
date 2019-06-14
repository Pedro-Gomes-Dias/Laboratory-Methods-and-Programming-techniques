//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//3.2.1 Cálculo da distância entre dois pontos (mat1.c)
//Peça ao usuário as coordenadas x e y de dois pontos diferentes e calcule a distância entre eles.

//d=sqrt((x2-x1)2+(y2-y1)2

//Table 4: TESTES
//entrada(s)	          saída esperada
//0, 0; 1, 1	          1.4142
///3, 4; 4, 2	          2.2361
//-5.5, 2.3; 7.1, -4.7	  14.414

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float x1, y1, x2, y2, d;
	printf("Digite o valor da abscissa referente ao ponto P1: ");
	scanf("%f", &x1);
	printf("\nDigite o valor da ordenada referentre ao ponto P1: ");
	scanf("%f", &y1);
	printf("\nDigite o valor da abscissa referente ao ponto P2: ");
	scanf("%f", &x2);
	printf("\nDigite o valor da ordenada referente ao ponto P2: ");
	scanf("%f", &y2);
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	printf("\nA distância entre os pontos P1 e P2 equivale à: %f",d);
	
	return 0;
}
