//Pedro Gomes Dias - 11821ECP007 - Turma:VB
//8º Laboratório de MTP

//Menor, cofator, comatriz e matriz adjunta (mat1.c)

# include <stdio.h>
# include <stdlib.h>
# include "matriz.h"

int main()
{
    Matriz a, adjunta;
    int ordem;
    printf("Digite a ordem da matriz que deseja\n");
    scanf("%d", &ordem);
    a = criarMatriz(ordem, ordem);
    CertifiedMatriz(a);
    printf("Matriz proposta:\n");
    imprimirMatriz(a);
    adjunta = adjunta(a);
    printf("Matriz adjunta:\n");
    imprimirMatriz(adjunta);
    destruirMatriz(a);
    destruirMatriz(adjunta);
    return 0;
}
