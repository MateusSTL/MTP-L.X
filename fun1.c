#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b, float c, float d)
{
	float s;
	s = ((d*a)+ (b*c))/ b*d;
	return s;
}

int main() 
{
	float a, b, c, d;
	scanf("%f/%f,%f/%f", &a, &b, &c, &d);
	printf("\n&f", soma(a,b,c,d));
	return 0;
}
