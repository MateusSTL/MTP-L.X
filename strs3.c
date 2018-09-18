#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char frase[31], f[31];
	int i;
	fgets(frase, 31, stdin);
	for(i = 0; i < 31; i++)
	{
		if(frase[i] >= 'a' && frase[i] <= 'm' || frase[i] >= 'A' && frase[i] <= 'M')
		    f[i] = frase[i] + 13;
		else
		    f[i] = frase[i] - 13;
		if(isalpha(frase[i]) == 0)
		    f[i] = frase[i];
	}
	printf("\n%s", f);
	return 0;
}
