#include <stdio.h>
#include <math.h>

float calc_delta(float a, float b, float c)
{
	return b*b - 4*a*c;
}

void raizes(float a, float b, float c, float *px1, float *px2)
{
	float d;
	d = calc_delta(a,b,c);
	*px1 = (-b + sqrt(d)) / (2 * a);
	*px2 = (-b - sqrt(d)) / (2 * a);
}

int main()
{
	float a, b, c, x1, x2;
	scanf("%f%f%f", &a, &b, &c);
	raizes(a,b,c,&x1,&x2);
	printf("x1 = %f\nx2 = %f\n", x1, x2);
}
