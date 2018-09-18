#include <stdio.h>

int main() 
{
	int vet[10], a, b;
	int i, j;
	for(i = 0; i < 10; i++)
		scanf("%d", &vet[i]);
	for(i = 10; i > 0; i--)
	    printf("%d ", vet[i-1]);
	return 0;
}
