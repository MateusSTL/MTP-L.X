#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *p;
	p = malloc(4);
	if(p != NULL)
	{
	    *p = 10;
	    printf("%d\nEndereco: %p", *p,p);
	    free(p);
    }
    else
        printf("Erro - nao foi possivel alocar memoria \n");
	return 0;
}
