#include <stdio.h>

int main() 
{
	int veta[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int vetb[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int vetiguais[];
	int soma = 0, i, j, k = 0;
	for(i = 0; i < 16; i++)
	{
		for(j = 0; j < 11; j++)
		{
			if(veta[i] = vetb[j])
			    {
				    vetiguais[k] = veta[i];
				    k++;
				}
		}
	}
	for(; k < 20; k++)
	{
		printf("%d,", vetiguais[k]);
	}
	return 0;
}
