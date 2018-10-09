#include <stdio.h>

int main() 
{
	int a, b, divi, resto;
	scanf("%d,%d", &a, &b);
	divi = a / b;
	resto = a%b;
	printf("\n%d,%d", divi, resto);
	return 0;
}
