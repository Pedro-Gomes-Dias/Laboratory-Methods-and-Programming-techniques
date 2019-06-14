//Nome:Pedro Gomes Dias - Matr�cula:11821ECP007 - Turma: VB

//3.2.3 Uma cifra de C�sar (str3.c)

//Em criptografia, uma cifra de substitui��o � um m�todo de criptografia que opera de acordo com um sistema pr�-definido de substitui��o. Uma substitui��o simples pode ser expressa escrevendo o alfabeto numa ordem diferente, que se designa alfabeto de substitui��o. Implemente a cifra ROT13, um exemplo de uma cifra de C�sar, conforme figura abaixo

//Tabela 7 TESTES

//entrada(s)                     //sa�da esperada
//hello                          uryyb
//UryyB                          HellO
//cuidado, PATOS!                phvqnqb, CNGBF!

#include<string.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

main()
{
	char frase[100], alfa, menu;
	int i, deltav;
		setlocale(LC_ALL, "portuguese");
	printf("Menu: ");
	printf("\nEncriptar frase [1]");
	printf("\nDecriptar frase [2]\n\n");
	scanf("%i", &menu);

	if(menu == 1)
	{
		printf("\n\nDigite a frase a ser encriptada: ");
		fflush(stdin);
		fgets(frase,100,stdin);
		printf("\nEscolha um deslocamento no intervalo [1,3]: ");
		scanf("%i", &deltav);

	while(deltav > 3)
	{
		printf("\nFAILED TO ENCRYPT =/\n");
		printf("\nDigite um novo deslocamento no intervalo [1,3]: ");
		scanf("%i", &deltav);
	}

	for(i = 0; frase[i] != '\0'; ++i)
	{
		alfa = frase[i];

		if(alfa >= 'a' && alfa <= 'z')
		{
			alfa = alfa + deltav;

			if(alfa > 'z')
			{
				alfa = alfa - 'z' + 'a' - 1;
			}
			frase[i] = alfa;
		}
		else if(alfa >= 'A' && alfa <= 'Z')
		{
			alfa = alfa + deltav;

			if(alfa > 'Z')
			{
				alfa = alfa - 'Z' + 'A' - 1;
			}
			frase[i] = alfa;
		}
	}
	printf("\nSUCCESSFUL ENCRYPTED: %s", frase);
	getch();
	return 0;
	}

	else if(menu == 2)
	{
		printf("\nDigite a frase a ser decriptada: ");
		fflush(stdin);
		fgets(frase,100,stdin);
		printf("\nInsira o deslocamento definido na encripta��o: ");
		scanf("%i", &deltav);

		while(deltav > 3)
		{
			printf("\nFAILED TO DECRYPT =/");
			printf("\nInsira o deslocamento definido na encripta��o: ");
			scanf("%i", &deltav);
		}

	for(i = 0; frase[i] != '\0'; ++i)
	{
		alfa = frase[i];

		if(alfa >= 'a' && alfa <= 'z')
		{
			alfa = alfa - deltav;

		if(alfa < 'a')
		{
			alfa = alfa - 'a' + 'z' +1;
		}
		frase[i] = alfa;
	}
	else if(alfa >= 'A' && alfa <= 'Z')
	{
		alfa = alfa - deltav;

		if(alfa < 'A')
		{
			alfa = alfa - 'A' + 'Z' + 1;
		}
		frase[i] = alfa;
	}
	}
	printf("\nSUCCESSFUL DECRYPTED: %s", frase);
	getch();
	return 0;
	}

	else if(menu != 1 || menu != 2)
	{
		printf("\nOp��o n�o dispon�vel, programa encerrado.");
	}
	getch();
	return 0;
}















