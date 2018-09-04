#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num;
	printf("Digite um numero inteiro qualquer: ");
	scanf("%d", &num);
	if(num%2 == 0)
	    printf("\nO numero eh par!");
	else
	    printf("\nO numero eh impar!");
	return 0;
}
