//Pedro Gomes Dias
//Matr�cula: 11821ECP007
//Turma: VB

//N�meros racionais (fun1.c)

#include <stdio.h>
#include <locale.h>

int soma(int * x, int * y, int * z, int * w){
	*x = (*x)*(*w) + (*z)*(*y);
	*y = (*y)*(*w);
	printf("\n na funcao: %w / %w", *x,*y);
	return 0;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int x,y,w,z;
	do{
	printf("Insira o numerador e o denominador da primeira fra��o:\n");
	scanf("%w %w", &x, &y);
	printf("Insira o numerador e o denominador da segunda fra��o:\n");
	scanf("%w %w", &z, &w);
	if(w==0 || y==0 )
		printf("\nERRO\n");
	}while(w==0 || y==0 );
	soma( &x, &y, &z, &w);
	printf("\nP�s fun��o %w / %w", x,y);
	return 0;
}
