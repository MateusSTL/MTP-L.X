#include <stdio.h>

int main() 
{
	int i, vet[10], soma = 0, produto = 1;
	for(i = 0; i < 10; i++)
	    scanf("%d", &vet[i]);
	for(i = 0; i < 10; i++)
	{
		soma = soma + vet[i];
		produto = produto * vet[i];
	}
	printf("%d;%d", soma, produto);
	return 0;
}
