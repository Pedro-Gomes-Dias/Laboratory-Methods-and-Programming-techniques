//Nome:Pedro Gomes Dias
//Matr�cula: 11821ECP007

//3.4.3 [EXTRA] Verfique a identidade (identidade.c)

//A identidade abaixo, proposta pelo matem�tico Leonard Euler que viveu no s�c. XVIII, relaciona exponenciais e sen�ides:

//exp(j?)=cos(?)+jsin(?)
//exp ? ( j ? ) = cos ? ( ? ) + j sin ? ( ? )
//Verifique a identidade utilizando o tipo complex e as fun��es cexp(), csin() e ccos(). Para isso, sorteie uma certa quantidade de n�meros aleat�rios (e.g. 100) entre 0 0  e 2p 2 p  para ? ? , e some o erro entre o resultado do lado esquerdo e o lado direito da identidade. Apresente o erro ao final.

#include<stdio.h>
#include<complex.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>


