#include <stdio.h>

int main() 
{
	int vetor[] = {0,1,2,4,8,16,1025}, i, flag = 0;
	char *p;
	p = vetor;
	for(i = 0; i < 28; i++) //Sao 7 numeros int q ocupam 4 bytes cada, logo 28 blocos(vai percorrer 28 blocos de bytes).
	{
		printf("\n%p", *(p + i)); //cada numero possui 4 bytes(blocos), e em cada bloco tem-se uma combinação de 2 numeros binarios, cada 1 com 4 numeros sendo 0 ou 1
		if(*(p+i) == 0x00)
		    flag++;
	}
	printf("\n%i", flag);
	return 0;
}
