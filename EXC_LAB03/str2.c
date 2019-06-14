//Nome:Pedro Gomes Dias - Matrícula:11821ECP007 - Turma: VB

//3.2.2 Número de vogais, consoantes, dígitos e espaços em branco (str2.c)

//Textos contém vogais (V), consoantes (C), dígitos (D) e/ou espaços em branco (E). Faça um programa que peça ao usuário uma frase – use fgets() – e que conte cada tipo desses para mostrar o resultado para o usuário. Dica: você pode considerar caracteres como "números"; por exemplo, para saber se é uma letra minúscula, pode comparar com if(s[i] >= 'a' && s[i] <= 'z').

//Tabela 6 TESTES

//entrada(s)                                         //saída esperada
//Este texto, pode ser 10!                           V:7;C:9;D:2;E:4
 
//Patati, patata?                                    V:6;C:6;D:0;E:1

//3,2,1,…                                            V:0;C:0;D:3;E:0

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

void quantidade(char *texto, int contador)
{
	char alf[27] = { 'a', 'e', 'i', 'o', 'u', 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z', '\0' };
	int i, j, vogais = 0, consoantes = 0, numeros = 0, espacos = 0;
	int vogal_or_consoante = 0;
	for (i = 0; i<contador; i++)
	{
		for (j = 0; j<27; j++)
		{
			if (texto[i] == alf[j] && j < 5)
			{
				vogais += 1;
				vogal_or_consoante = 1;
			}
			else if (texto[i] == alf[j] && j >= 5)
			{
				consoantes += 1;
				vogal_or_consoante = 1;
			}
		}
	}
	if (texto [i] != alf[j] && j <= 26)
		{
			numeros += 1;
		}
	else
		{
			espacos += 1;
		}
	
	printf("Vogais:%d\n", vogais);
	printf("Consoantes:%d\n", consoantes);
	printf("Números:%d\n", numeros);
	printf("Espaços:%d\n", espacos);
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	char texto[100];
	int contador;
	gets(texto);
	contador = strlen(texto);
	quantidade(texto, contador);
	return 0;
}











