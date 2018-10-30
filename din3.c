#include <stdio.h>
#include <ctype.h>

int main() 
{
	char s[30];
	int i;
	fflush(stdin);
	gets(s);
	for(i = 0; i < 30; i++)
	{
		if(s[i] != ' ' && s[i+1] == ' ' && s[i+2] == ' ')
		    s[i+1] = '.';
	}
	printf("%s\n", s);
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] != ' ')
		    s[i] = toupper(s[i]);
	}
	printf("%s", s);
	return 0;
}
