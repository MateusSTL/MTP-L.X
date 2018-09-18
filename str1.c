#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 31

int main() 
{
	char p1[] = "bom dia", p2[] = "Bom dia pra voce tambem", p3[] = "Saindo? Que pena…";
	char p4[] = "Voce quis dizer: ", p5[] = "?", p6[] = "tchau", frase[MAX], frasemin[MAX], frasemai[MAX];
	int i, n;
	fgets(frase, MAX, stdin);
    for(i = 0; i < MAX; i++)
	    frasemin[i] = tolower(frase[i]);
	if(strcmp(frasemin,p1) == 0)
	{
		printf("\n%d;%s", strlen(frasemin), p2);
	}
	else if(strcmp(frasemin, p6) == 0)
	{
		printf("\n%d;%s", strlen(frasemin), p3);
	}
	else
	{
		for(i = 0; i < MAX; i++)
		{
			frasemai[i] = toupper(frasemin[i]);
		}
		n = strlen(frasemai);
		strcat(frasemai,p5);
		strcat(p4,frasemai);
		printf("%d;%s", n, p4);
	}
	return 0;
}
