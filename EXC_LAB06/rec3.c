//Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Frações irredutíveis (rec3.c)

#include <stdio.h>
#include <locale.h>

int soma(int * x, int * y, int * z, int * w, int * numR, int * denR){
	*numR= (*x)*(*w) + (*z)*(*y);
	*denR = (*y)*(*w);
	return 0;
}
int MDC (int x, int y){
    if(x == y || y == 0)
        return x;
    else if (x == 0)
        return y;
    else if (x%2 == 0 && y%2 == 1)
        return MDC (x/2, y);
    else if (x%2 == 1 && y%2 == 0)
        return MDC (x, y/2);
    else if (x%2 == 0 && y%2 == 0)
        return 2 * MDC(x/2,y/2);
    else if (x > y)
        return MDC((x-y)/2, y);
    else
        return MDC ((y-x)/2, x);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int x,y,w,z, numR, denR;
	do{
	printf("Insira o numerador e o denominador da primeira fração:\n");
	scanf("%d %d", &x, &y);
	printf("Insira o numerador e o denominador da segunda fração:\n");
	scanf("%d %d", &z, &w);
	if(w==0 || y==0)
		printf("\nERRO\n");
	}while(w==0 || y==0 );
	soma( &x, &y, &z, &w, &numR, &denR);
	printf("\nA soma resultante é %d/%d \n", (numR/MDC(numR, denR)), (denR/MDC(numR,denR)));
	return 0;
}
