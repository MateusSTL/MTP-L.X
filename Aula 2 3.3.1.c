#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num;
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	if(num%2 == 0)
	{
		printf("\nO numero eh par.");
		if(num%3 == 0 || num%7 == 0)
		    printf("\nNumero multiplo de 3 ou 7");
	}
	else
	{
	    printf("\nO numero eh impar");
	    if(num%5 == 0)
	        printf("\nNumero multiplo de 5.");
	}	    
	return 0;
}
