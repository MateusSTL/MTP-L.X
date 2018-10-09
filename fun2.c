#include <stdio.h>

int div(int a, int b)
{
	int divi;
	divi = a / b;
	return divi;
}

int resto(int a, int b)
{
	int resto.
	resto = a % b;
	return resto;
} 

int main() 
{
	int a, b;
	scanf("%d,%d", &a, &b);
	printf("\n%d, %d", divi(a,b), resto(a,b));
	return 0;
}
