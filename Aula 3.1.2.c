#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i;
	char frase[30], minuscula[30];
	printf("Digite sua frase: ");
	fflush(stdin);
	fgets(frase, 30, stdin);
	for(i=0; frase[i] != '\0'; i++)
	{
		minuscula[i] = tolower(frase[i]);
	}
	printf("\nSua frase minuscula eh: %s", minuscula);
	return 0;
}
