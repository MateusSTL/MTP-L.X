#include <stdio.h>
#include <ctype.h>
int main() 
{
	int i;
	char frase[30], maiuscula[30];
	printf("Digite a frase: ");
	fflush(stdin);
	fgets(frase,30,stdin);
	for(i=0; frase[i] != '\0'; i++)
	{
		maiuscula[i] = toupper(frase[i]);
	}
	printf("\nFrase maiuscula: %s", maiuscula);
	return 0;
}
