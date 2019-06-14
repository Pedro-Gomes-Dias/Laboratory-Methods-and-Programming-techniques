//Nome: Pedro Gomes Dias - Matrícula: 11821ECP007 - Turma: VB

/*3.3.2 Arte abstrata aleatória (casr2.c)
Peça ao usuário o número de colunas e de linhas para fazer um "desenho" abstrato. Crie uma função que imprima tantas linhas quanto o usuário escolher, com tantos caracteres (colunas) dentre os seguintes: char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':."; (Note que se quiser usar o caractere de escape "\", precisa indicar "\\" dentro da string). Dica: na função de desenho, use strlen() da biblioteca <string.h>; rand() para sortear cada caractere de maneira aleatória e um laço aninhado para controlar linhas e colunas.*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<time.h>

static const char icon[] =
"$"
"#"
":"
"4"
"b"
"."
":."
"$#"
"$:"
"4b.";

int iconsize = sizeof(icon) - 1;

char getrandomchar()
{
	return icon[rand() % iconsize];
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int	i, j,k, l;
	printf("Informe o tamanho da matriz: ");
	scanf("%i%i", &k, &l);
	float matriz[k][l];
	
	for(i = 0; i < k; i++)
	{
		for(j = 0; j < l; j++)
		{
			matriz[i][j] = getrandomchar();
		}
	}
	
	for(i = 0; i < k; i++)
	{
		for(j = 0; j < l; j++)
		{
			printf("%.lf", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
