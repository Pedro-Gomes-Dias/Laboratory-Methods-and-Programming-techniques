//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Peça um número (inteiro) para o usuário. Pegue esse número, inverta-o e some-o com ele mesmo 729 vezes (use um laço para isso). Faça duas vezes, sendo a primeira com a inversão armazenada em um tipo float e a segunda em um tipo double. Retorne o resultado das duas somas mostrando 15 casas decimais (especificador %.15f).

//Table 7: TESTES
//entrada(s)	saída esperada
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
	printf("Digite um número inteiro: ");
	scanf("%f", &n);
	resdb = 729 / n ;
	resf = 729 / n ;
	printf("\nO resultado armazenado no tipo double é %.15f", resdb);
	printf("\nO resultado armazenado no tipo float é %.15f", resf);
	
	return 0;
}
