//Aluno: Pedro Gomes Dias - Turma: VB
//Matrícula: 11821ECP007

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

float med(float * vet, int N){
	int soma=0,i; 
	float media;
 	for(i = 0; i < N; i++){
 		soma = soma + vet[i];
 	}
 	media = soma/N;
	printf("\nA media eh: %.2f" , media);
	return media;
}

void desvpad(float * vet, int N, float M){
	float quadrado, dp, d;
	int i;
	for(i = 0; i < N; i++){
 		quadrado = quadrado + pow(M-vet[i],2);
 	}
	d = quadrado/(N-1);
 	dp = sqrt(d);
	printf("\nO desvio padrao eh: %.2f" , dp);
}

void imprime(float * vet, int N) {
  int i, j;
  printf("\nO vetor fica: ");
  for(i = 0; i < N; i++)
      printf("%.2f ", vet[i]);
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int i, j;
  int N;
  float M;
  float * vet;
  printf("Entre com a quantidade de números que desejar: ");
  scanf("%d", &N);
  vet = (float*)calloc(N,sizeof(float*));
  for(i = 0; i < N; i++) { 
      printf("Elemento (%d): ", i);
      scanf("%f", &vet[i]);
  }
  M = med(vet,N);
  desvpad(vet,N,M);
  imprime(vet, N);
  free(vet);
  return 0;
}
