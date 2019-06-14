//Pedro Gomes Dias
//Matrícula: 11821ECP007
//Turma: VB

//Imprimindo na ordem inversa (rec2.c)

#include <stdio.h>

int inverte(char * frase){
	if(*frase) {
	inverte(frase+1);
	printf("%c",*frase);
	}
	return 0;
}

int main(){
	char frase[256];
	fgets(frase,256,stdin);
	inverte(frase);
	return 0;
}
