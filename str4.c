#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char frase[100], frasem[100], fraset[100];
	int i, j;
	fgets(frase, 100, stdin);
	for(i = 0; frase[i] != '\0'; i++)
		frasem[i] = tolower(frase[i]);
	for(j = 0; frasem[j] != '\0'; j++)
	{
		if(frasem[j] == 'a')
		    fraset[j] = '4';
		else if(frasem[j] == 'e')
		    fraset[j] = '3';
		else if(frasem[j] == 'i')
		    fraset[j] = '1';
		else if(frasem[j] == 'o')
		    fraset[j] = '0';
		else if(frasem[j] == 's')
		    fraset[j] = '5';
		else if(frasem[j] == 'g')
		    fraset[j] = '6';
		else
		    fraset[j] = frasem[j];
	}
	printf("\n%s", fraset);
	return 0;
}
