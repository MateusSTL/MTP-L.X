#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float real1, imag1, real2, imag2, somar, somai;
	scanf("%f,%f;%f,%f", &real1, &imag1, &real2, &imag2);
	somar = real1 + real2;
	somai = imag1 + imag2;
	printf("%f + %f*I", somar, somai);
	return 0;
}
