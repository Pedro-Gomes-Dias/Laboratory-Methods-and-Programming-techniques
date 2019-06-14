//Pedro Gomes Dias - 11821ECP007 - Turma:VB
//8� Laborat�rio de MTP

//Multiplica��o de matrizes (mat4.c)

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
    Matriz a, b, c;
    int linha, c;
    printf("Digite uma linha da primeira matriz\n");
    scanf("%d", &linha);
    printf("Digite uma coluna da primeira matriz\n");
    scanf("%d", &c);
    a = criarMatriz(linha, c);
    printf ("Digite uma linha da matriz original\n");
    scanf("%d", &linha);
    printf("Digite uma coluna da matriz principal\n");
    scanf("%d", &c);
    b = criarMatriz(linha, c);
    certifiedMatriz(a);
    complerMatriz(b);
    c = multiplica��oMat(a, b);
    if(vazia(c)==1)
    {
        printf("N�o � poss�vel realizar a multiplica��o das matrizes informadas.");
	}
    else
    {
    	imprimirMatriz(c);
    	destruirMatriz(a);
    	destruirMatriz(b);
    	destruirMatriz(c);
	}
    return 0;
}
