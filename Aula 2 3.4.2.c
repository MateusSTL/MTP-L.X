#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int b, p, res=1;
	printf("Digite os valores da base e da potencia: ");
	scanf("%i;%i", &b, &p);
	while(p > 0)
	{
		res = res * b;
		p--;
	}
	printf("\nResultado vale: %i", res);
	return 0;
}
