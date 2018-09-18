#include <stdio.h>

int main() 
{
	float vet[10000], media;
	int i, num, n1, soma = 0;
	srand(time(0));
	scanf("%d", &num);
	for(i = 0; i < 10000; i++)
	{
		n1 = rand()%(num + 1);
		soma = soma + n1;
	}
	media = (float)soma / 10000;
	printf("\nMedia = %f", media);
	return 0;
}
