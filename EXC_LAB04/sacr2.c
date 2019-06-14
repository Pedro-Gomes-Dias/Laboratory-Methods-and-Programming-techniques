//Nome: Pedro Gomes Dias - Matrícula: 11821ECP007 - Turma: VB

/*3.2.2 Jogo de dados (sacr2.c)
Crie uma função que simule um dado com 6 faces.

Desenvolva um mini jogo de dados: o jogador deve "lançar" 5 dados (apertando ENTER) e tentar obter, na soma dos resultados, um valor entre 18 e 23. O jogo se encerra assim que o jogador ganhar ou atingir três tentativas sem sucesso (neste caso, informe ao usuário que ele perdeu). A cada rodada, mostre o resultado dos dados e a soma dos mesmos.

Table 3: TESTES
entrada(s)	saída esperada
qualquer	vence em aprox. 44% das vezes*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define max 500

int Jogada,p=0;

void JogaDado()
{
	int cont=3;
	for(cont=3;cont>0;cont--)
	{
		srand(time(NULL));
		int sum=0, i;
		system("cls");
		printf("\n\nPressione a tecla ENTER para lancar os dados. Voce ainda possui %d chance(s).\n\n",cont);
		getch();
		for(i=0; i<6; i++)
		{
	        Jogada = (rand()%7);
	        printf("Resultado do dado %d: %d \n\n", i+1, Jogada);
	        sum+=Jogada;
	    }
	    printf("\n\n A soma dos resultados e : %d\n\n",sum);
	    if(sum>=18 && sum<=23)
	    {
	    	printf("\n\n Parabens! A soma dos resultados dos lancamentos foi %d. Voce venceu!\n\n", sum);
	    	getch();
	    	break;
		}
		else if(cont==1)
		{
			printf("\n\nSuas chances acabaram! Voce perdeu. Mais sorte da proxima vez!");
			getch();
			break;
		}
	    if(sum<18 || sum>23)
		{
			printf("\n\nVoce ainda nao atingiu a meta! Tente novamente!");	
			getch();
		}
	    printf("\n\nPressione qualquer tecla para prosseguir para o proximo lancamento.\n\n");
	    getch();
	    
	  
	}

}


int main() {
	
	do{
	system("cls");
	
    printf("\n\n Jogo de dados!\n\n Voce possui 3 chances de rolar 5 dados;\n\n Para rolar os dados aperte a tecla ENTER;\n\n Caso a soma dos valores gerados seja um valor entre 18 e 23 voce vence;\n\n Caso seja um valor diferente voce poderah jogar novamente ate que suas chances acabem e voce perca.");
	printf("\n\n\n Pressione qualquer tecla para iniciar o jogo!");
	getch();
	
	JogaDado();
	
	system("cls");
	
	printf("\n\nSe deseja jogar novamente entre 0, caso deseje sair do programa entre 1.\n\n");
	scanf("%d",&p);
	
	}while(p==0);
	
    return 0;

}
