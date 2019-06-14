//Nome: Pedro Gomes Dias - Matrícula: 11821ECP007 - Turma: VB

/*3.4.1 Inteiro como soma de dois primos (cacr1.c)
Crie uma função que verifique se um número inteiro não-negativo é primo. A função deve retornar 1 se o número for primo e 0 caso contrário.

Agora, com o auxílio dessa função, verifique se um número fornecido pelo usuário é primo; se não, verifique ainda se pode ser representado pela soma de dois primos, mostrando todas as possibilidades.

Table 5: TESTES
entrada(s)	saída esperada
22	        não e primo nem expresso por soma de primos
34	        3+31; 5+29; 11+23; 17+17; 4 possibilidades
71	        primo!*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#define max 500

int p=0,a;
int vet[max];

int ComprimentoVet(int v[])
{
	int c=0, i;
	for(i=0;v[i]!=0;i++)
	{
		c+=1;
	}
	return c+1;
}

int TodosPrimos(int v[],int n)
{
	int c=0, i, j;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i==2)
			{
				
			}
			else if(i%j==0)
			{
				break;
			}
			else
			{
				v[c]=i;
				c++;
				break;
			}
		}
	}
}

int ChecaPar(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int ChecaPrimo(int n)
{
	int i;
	for(i=(n-1);i>1;i--)
	{
		if(n%i==0)
		{
			break;
			return 0;
		}
		else if(i==2)
		{
			return 1;
		}
	}
}

int ChecaSoma(int v[], int n)
{
	int r=ChecaPar(n);
			if(r==0)
			{
				int r2=ChecaPrimo(n);
				if(r2==1)
				{
					printf("\n\nO numero %d e primo.\n\n",n);
					getch();
				}
				else
				{
					int r3=ChecaPrimo(n-2);
					if(r3==0)
					{
						printf("\n\nO numero %d nao e primo.\n\n",n);
						printf("\n\nE ele nao pode ser escrito como soma de dois primos.");
						getch();
					}
					else
					{
						printf("\n\nO numero %d nao e primo.\n\n",n);
						printf("\n\nPorem ele pode ser escrito como soma de dois primos, tais que: \n\n %d+2=%d.",(n-2),n);
						getch();
					}
				}
			}
			else
			{
				int r4=ChecaPrimo(n);
				if(r4==1)
				{
					printf("\n\nO numero %d e primo.",n);
					getch();
				}
				else
				{
					printf("\n\nO numero %d nao e primo.",n);
					TodosPrimos(v,n);
					int compri=ComprimentoVet(v), i;
					for(i=0;i<compri;i++)
					{
						int r5=ChecaPrimo(n-(v[i])), r6=ChecaPrimo(v[i]);
						if(r5==1 && r6==1)
						{
							printf("\n %d + %d",(n-v[i]),(v[i]));
						}
					}
					getch();
				}
			}
}

int main() {
	
	do{
		system("cls");
		
		printf("\n\nEntre um numero inteiro positivo para saber se ele e primo e se pode ser representado pela soma de dois primos, com todas as suas combinacoes:\n\n");
		scanf("%d",&a);
		ChecaPrimo(a);
		ChecaSoma(&vet[max],a);
		TodosPrimos(&vet[max],a);
		getch();
		
		system("cls");
		printf("\n\nSe deseja usar o programa novamente entre 0, caso deseje sair do programa entre 1.\n\n");
		scanf("%d",&p);
		
	}while(p==0);
	
    return 0;

}
