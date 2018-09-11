#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, flag = 0;
	char frase[30];
	printf("Digite a frase: ");
	fflush(stdin);
	fgets(frase,30,stdin);
	for(i=0; frase[i] != '\0'; i++)
	{
		if(isalpha(frase[i]) != 0) /*se o valor dá 0, quer dizer que é falso. Valores diferentes de 0 são verdadeiros */
		    	flag++;
	}
	printf("\nNumero de letras: %d", flag);
	return 0;
}
