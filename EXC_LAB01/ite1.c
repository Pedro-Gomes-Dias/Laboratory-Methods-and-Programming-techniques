//Nome: Pedro Gomes Dias
//Matr�cula: 11821ECP007

//Exerc�cios(ite1.c)

//Receba do usu�rio um n�mero inteiro e fa�a o c�lculo do fatorial desse n�mero.

//n!=?i=0n-1n-i=n�(n-1)���2�1
//n ! = ? i = 0 n - 1 n - i = n � ( n - 1 ) � � � 2 � 1
//Tabela 4 TESTES
//entrada(s)	sa�da esperada
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
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &n);
	for( ; n >= 1; --n){
		r *= n;
	}
	printf("O fatorial do n�mero digitado equivale �: %d", r);
	getch();
	return 0;
}
