#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float l, area;
	printf("Digite o valor do lado do quadrado: ");
	scanf("%f", &l);
	area = l * l;
	printf("\nO valor da area desse quadrado eh: %g", area);
	return 0;
}
