#include <stdio.h>

int main() 
{
	int veta[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int vetb[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int vetig[20];
	int i, j, k = 0;
	for(i = 0; i < 16; i++)
	{
		for(j = 0; j < 11; j++)
		{
			if(veta[i] == vetb[j])
			    {
				    vetig[k] = vetb[j];
				    printf("%d ", vetig[k]);
					k++;
				}
		}
	}
	return 0;
}
