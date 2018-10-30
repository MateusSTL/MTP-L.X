#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, i, j, *x, *y, somax = 0, somay = 0;
	float area, centx, centy, mult1 = 1;
	printf("Digite o numero de vertices: ");
	scanf("%d", &a);
	x = (int *)malloc(a * sizeof(int));
	y = (int *)malloc(a * sizeof(int));
	for(i = 0; i < a; i++)
	{
		printf("Digite a coordenada x do ponto %d: ", i+1);
		scanf("%d", &x[i]);
	}
	for(j = 0; j < a; j++)
	{
		printf("Digite a coordenada y do ponto %d: ", j+1);
		scanf("%d", &y[i]);
	}
	for(i=0, j=0; i<(a-1), j<(a-1); i++,j++)
	{
		mult1 = mult1 * ((x[i] * y[i+1]) - (x[i+1] * y[i]));
	}
	area = mult1 / 2;
	for(i=0, j=0; i<(a-1), j<(a-1); i++,j++)
	{
		somax = somax + x[i];
		somay = somay + y[i];
	}
	centx = somax / a;
	centy = somay / a;
	printf("Area = %f, Centroide = %f,%f", area, centx, centy);
	return 0;
}
