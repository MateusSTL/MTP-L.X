#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float b, h, area;
	printf("Digite os valores da base e da altura do triangulo: ");
	scanf("%f;%f", &b, &h);
	area = (b * h) / 2.0;
	printf("\nArea do triangulo = %.2f", area);
	return 0;
}
