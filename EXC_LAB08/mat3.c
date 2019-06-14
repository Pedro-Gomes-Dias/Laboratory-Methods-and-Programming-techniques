//Pedro Gomes Dias - 11821ECP007 - Turma:VB
//8� Laborat�rio de MTP

//Matriz inversa (mat3.c)

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
    Matriz a, i;
    int x;
    printf("Digite a ordem da matriz que deseja\n");
    scanf("%d", &x);
    a = criarMatriz(x, x);
    CertifiedMatriz(a);
    imprimirMatriz(a);
    i = inversa(a);
    if(vazia(i)==1)
    {
        printf ("A matriz informada n�o possui inversa.");
	}
    else
    {
        imprimirMatriz(i);
    	destruirMatriz(a);
    	destruirMatriz(i);
	}
    return 0;
}

