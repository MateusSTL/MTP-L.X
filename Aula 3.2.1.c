#include <stdio.h>
#include <math.h>

int main() 
{
	float x1, x2, y1, y2;
	float dist;
	printf("Digite as coordenadas x e y dos 2 pontos: ");
	scanf("%f,%f;%f,%f", &x1, &y1, &x2, &y2);
	dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
	printf("\nDistancia vale: %f", dist);
	return 0;
}
