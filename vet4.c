#include <stdio.h>

int main() 
{
	int num, vet[num], max, min, i, n1;
	srand(time(0));
	printf("Digite numero inteiro entre 1 e 1000: ");
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		n1 = rand()%10;
		vet[i] = n1;
	}
	max = vet[0];
	min = vet[0];
	for(i = 0; i < num; i++)
	{
		if(vet[i] > max)
		    max = vet[i];
		if(min > vet[i])
		    min = vet[i];
	}
	printf("\n%d;%d", min, max);
	return 0;
}
