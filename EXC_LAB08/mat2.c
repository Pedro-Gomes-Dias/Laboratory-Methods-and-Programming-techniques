//Pedro Gomes Dias - 11821ECP007 - Turma:VB
//8º Laboratório de MTP

//Determinante de matrizes (mat2.c)

#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() 
{
    Matriz a;
    int x;
    printf("Digite a ordem da matriz que deseja\n");
    scanf("%d", &x);
    a = criarMatriz(x, x);
    CertifiedMatriz(a);
    imprimirMatriz(a);
    printf ("%lg\n", determinante(a));
    destruirMatriz(a);
    return 0;
}
