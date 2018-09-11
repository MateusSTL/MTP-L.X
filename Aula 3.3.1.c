#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, flag = 0;
	double n1, prob;
	srand(time(NULL));
	printf("Digite a probabilidade: ");
	scanf("%lf", &prob);
	for(i=0; i < 1000; i++)
	{
		n1 = rand()RAND_MAX;
		if(n1 < prob)
		    flag++;
	}
	printf("\n%d", flag);
	return 0;
}
