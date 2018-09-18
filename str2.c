#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
	int v=0, c=0, d=0, e=0, i;
	char frase[31], frasemin[31];
	fgets(frase, 31, stdin);
	for(i = 0; frase[i] != '\0'; i++)
	{
		frasemin[i] = tolower(frase[i]);
		if(isdigit(frasemin[i]) != 0)
		    d++;
		else if(isspace(frasemin[i]) != 0)
		    e++;
		else if(isalpha(frasemin[i]) != 0)
		{
			if(frasemin[i] == 'a' || frasemin[i] == 'e' || frasemin[i] == 'i' || frasemin[i] == 'o' || frasemin[i] == 'u')
			    v++;
			else
			    c++;
		}
	}
	printf("V:%d;C:%d;D:%d;E:%d", v, c, d, (e-1));
	return 0;
}
