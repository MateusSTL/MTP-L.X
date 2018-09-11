#include <stdio.h>

int main() 
{
	int num, i;
	float som = 0;
	double somaa = 0;
	scanf("%d", &num);
	for(i = 0; i < 729; i++)
		{
			som = som + (num + ((float)1 / num));
		}
	for(i = 0; i < 729; i++)
	    {
		    somaa = somaa + (num + ((double)1 / num));
		}
	printf("%.15f,%.15lf", som, somaa);
	return 0;
}
