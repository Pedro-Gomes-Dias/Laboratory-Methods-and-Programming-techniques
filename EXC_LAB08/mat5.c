//Pedro Gomes Dias - 11821ECP007 - Turma:VB
//8º Laboratório de MTP

//Sistema de equações lineares (mat5.c)

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	Matriz A, I, B, R;
    int ordem;
    printf("Informe a ordem do sistema desejado\n");
    scanf("%d", &ordem);
    A = criarMatriz(ordem, ordem);
    CertifiedMatriz(A);
    B = criarMatriz(ordem, 1);
    ComplerMatriz(B);
    I = inversa(A);
    if(vazia(I)==1)
    {
        printf("Temos um sistema impossível ou indeterminado.");
	}
    else
	{
        R = multiplicaçãoMat(I, B);
        imprimirSis(R);
    }
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(I);
    destruirMatriz(R);
    return 0;
}
