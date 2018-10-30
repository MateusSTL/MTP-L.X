#include <stdio.h>
#include <math.h>

int main() 
{
    int a, i;
    float media, dp, var, *p, soma = 0, somat = 0;
    printf("Digite quantos numeros voce vai digitar: ");
    scanf("%d", &a);
    p = (float *)malloc(a * sizeof(float));
    if(p != NULL)
    {
    	for(i = 0; i < a; i++)
    	{
    		scanf("%f", &p[i]);
		}
	}
	for(i = 0; i < a; i++)
	{
		soma = soma + p[i];
	}
	media = soma / a;
	for(i = 0; i < a; i++)
	{
		somat = somat + (pow((media - p[i]), 2));
	}
	var = somat / (a -1);
	dp = sqrt(var);
	printf("%.5f, %.5f", media, dp);
	return 0;
}
