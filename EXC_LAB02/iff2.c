//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//Pe�a um n�mero (inteiro) para o usu�rio. Pegue esse n�mero, inverta-o e some-o com ele mesmo 729 vezes (use um la�o para isso). Fa�a duas vezes, sendo a primeira com a invers�o armazenada em um tipo float e a segunda em um tipo double. Retorne o resultado das duas somas mostrando 15 casas decimais (especificador %.15f).

//Table 7: TESTES
//entrada(s)	sa�da esperada
//5	            145.798919677734, 145.8
//81	        9.00002288818359, 8.99999999999996
//1023	        0.712609350681305, 0.712609970674486

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	double resdb;
	float resf, n;
	printf("Digite um n�mero inteiro: ");
	scanf("%f", &n);
	resdb = 729 / n ;
	resf = 729 / n ;
	printf("\nO resultado armazenado no tipo double � %.15f", resdb);
	printf("\nO resultado armazenado no tipo float � %.15f", resf);
	
	return 0;
}
