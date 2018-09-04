#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num, p, k = 1, i=0, soma = 0;
	float vet[100];
	printf("Digite o numero: ");
	scanf("%i", &num);
	p = num / 2;
	while(p >= k)
	{
		if(num%p == 0)
		    {
			    vet[i] = p;
			    i++;
			    p--;
			}
		else
		    p--;
	}
	for(i=0; i < 99; i++)
	{
		soma = soma + vet[i];
	}
	if(soma == num)
	    printf("\nO numero eh perfeito.");
	else
	    printf("\nO numero nao eh perfeito.");
	return 0;
}
