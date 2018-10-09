#include <stdio.h>
#include <ctype.h>

int main() 
{
	char str[20];
	int i;
    fflush(stdin);
    gets(str);
    for(i = 18; i > 0; i--)
    {
    	if(str[i] != '\0' && str[i] != ' ')
    		printf("%s", str[i]);
	}
	return 0;
}
