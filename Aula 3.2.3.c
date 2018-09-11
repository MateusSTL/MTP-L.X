#include <stdio.h>
#include <math.h>

int main() 
{
	double num, base, logaritmo;
	printf("Digite o numero e a base: ");
	scanf("%lf,%lf", &num, &base);
	logaritmo = log(num) / log(base);
	printf("\nSeu logaritmo vale: %.5lf", logaritmo);
	return 0;
}
