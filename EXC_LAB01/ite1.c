//Nome: Pedro Gomes Dias
//Matrícula: 11821ECP007

//Exercícios(ite1.c)

//Receba do usuário um número inteiro e faça o cálculo do fatorial desse número.

//n!=?i=0n-1n-i=n·(n-1)·…·2·1
//n ! = ? i = 0 n - 1 n - i = n · ( n - 1 ) · … · 2 · 1
//Tabela 4 TESTES
//entrada(s)	saída esperada
//5	             120
//8	             40320
//12             479001600

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL , "portuguese");
	int n, r = 1;
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	for( ; n >= 1; --n){
		r *= n;
	}
	printf("O fatorial do número digitado equivale à: %d", r);
	getch();
	return 0;
}
