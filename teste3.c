#include <stdio.h>

int main() 
{
	int vetor[] = {2,4,6,8,10,12}, *p, i;
	p = vetor;
	for(i = 0; i < 6; i++)
	{
		*(p + i) = *(p + i) * 2; // p[i] = p[i] * 2;
		printf("%i ", *(p + i)); // printf("\n%i ", p[i]);
	}
	return 0;
}
