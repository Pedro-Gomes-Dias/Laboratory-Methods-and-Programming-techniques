//Nome: Pedro Gomes Dias - Matrícula: 11821ECP007 - Turma: VB

/*3.1.1 Chat com um robô - chatbots (sasr1.c)

Crie uma função que imprima aleatoriamente uma das seguintes frases:

Tudo bem?
Ok
LOL!
Que legal
Que chato
Fale mais sobre isso
Sobre o que mais quer falar?
Eu não acho…
Tá bom, voce venceu.
Faça um programa que interaja com o usuário. Faça uma saudação e aguarde uma frase do usuário. Responda com uma das frases. Faça isso até o usuário entrar com "tchau".*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 500

int p=0,m=0,c=0;
char str[max];

void Interacao(int k)
{
	
	switch(k)
		{
		case 1: 
		system("cls");
		printf("\n\nTudo bem?!\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 2: 
		system("cls");
		printf("\n\nOk.\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 3: 
		system("cls");
		printf("\n\nLOL!\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 4: 
		system("cls");
		printf("\n\nQue legal!\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 5: 
		system("cls");
		printf("\n\nQue chato.\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 6: 
		system("cls");
		printf("\n\nFale mais sobre isso.\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 7: 
		system("cls");
		printf("\n\nSobre o que mais quer falar?\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 8: 
		system("cls");
		printf("\n\nEu nao acho...\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		
		case 9: 
		system("cls");
		printf("\n\nTa bom, voce venceu.\n\n");
		printf("\n\nSua resposta:\n\n");
		fflush(stdin);
		gets(str);
		break;
		}
	
}

void ConverteMaisculo(char s[])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]-=32;
		}
		else
		{
			str[i]=str[i];
		}
	}
}

void ChecaTchau(char s[])
{
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]+str[i+1]+str[i+2]+str[i+3]+str[i+4]== (84+67+72+65+85))
		{
			p=1;
			printf("\n\nTchau!!\n\n");
			getch();
			break;
		}
	}
}

int main()
{
	do
	{
		system("cls");
		if(c==0)
		{
			printf("\n\nOla! Como esta voce?!\n\n");
			printf("\n\nSua resposta:\n\n");
			fflush(stdin);
			gets(str);
		}
		ConverteMaisculo(str);
		ChecaTchau(str);
		if(p==0)
		{
			Interacao(rand() % 10);	
		}
		c++;
	}while(p==0);
	
	return 0;
}
