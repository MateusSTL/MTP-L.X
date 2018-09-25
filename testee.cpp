#include <stdio.h>

int main() 
{
	char a, b, *pont;
	pont = &a;
	*pont = 'e';
	printf("a = %c", *pont);
	printf("\nEndereco de a = %p", pont);
	pont++;
	printf("\nEndereco apontado por pont: %p", pont);
	return 0;
}
