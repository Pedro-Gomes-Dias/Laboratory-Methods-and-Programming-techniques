//Nome:Pedro Gomes Dias
//Matrícula: 11821ECP007

//3.2.3 Logaritmo de qualquer base (mat3.c)
//Peça ao usuário um número e a base desejada, e calcule o logaritmo do número naquela base.

//logbn=logxnlogxb
//log b ? n = log x ? n log x ? b
//Table 6: TESTES
//entrada(s)	saída esperada
//1024, 2	    10
//121, 11	    2
//1024, 11	    2.8906

#include <math.h> 
#include <stdio.h>
#include <locale.h>
#include <stdint.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	uint32_t log(uint32_t num, uint32_t base)
	{
    	return log2(num) / log2(base);
	}
	
	uint32_t num, base;
	printf("Digite a base: ");
	scanf("%u", &base);
	printf("\nDigite o logaritmando: ");
	scanf("%u", &num);
	printf("\nO resultado da expressão logarítmica é %u", log(num,base));
	return 0;
}


