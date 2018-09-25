#include <stdio.h>

int main() 
{
	int a, b, *pont;
	pont = &a;
	*pont = 'e';
	printf("a = %d", *pont);
	printf("\nEndereco de a = %p", pont);
	pont++;
	printf("\nEndereco apontado por pont: %p", pont);
	return 0;
}
