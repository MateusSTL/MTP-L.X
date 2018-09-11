#include <stdio.h>
#include <math.h>

int main() 
{
	float a, b, c;
	double cosseno;
	printf("Digite os valores dos lados b, c e o angulo em radianos: ");
	scanf("%f,%f,%lf", &b, &c, &cosseno);
	a = sqrt(pow(b, 2) + pow(c, 2) - (2 * b * c * cos(cosseno)));
	printf("\nSeu lado a vale: %.4f", a);
	return 0;
}
