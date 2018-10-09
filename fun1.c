#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b, float c, float d)
{
	if(b == 0 || d == 0)
	    return 1;
}

int main() 
{
	float a, b, c, d, m, n, o, s;
	scanf("%f/%f,%f/%f", &a, &b, &c, &d);
	if(soma(a,b,c,d) == 1)
	    {
		    printf("\nErro!");
		    return 0;
		}
	m = d * a;
    n = b * c;
    o = b * d;
    s = m + n;
    printf("\n%.1f/%.1f", s, o);
	return 0;
}
