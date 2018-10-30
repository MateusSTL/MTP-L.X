#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *p;
	p = (int *)malloc(4);
	*p = 10;
	printf("%d\nEndereco: %p", *p,p);
	free(p); 
	return 0;
}

//Liberou a memória reservada
// Forcei a conversão pra inteiro;4 bytes na memória guardados para o meu numero int(pois int ocupa 4 bytes)
