#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *p;
	p = malloc(3*sizeof(int));
	if(p != NULL)
	{
	    *p = 30;  // p[0] = 30;
	    *(p + 1) = 10;  // p[1] = 10;
	    *(p + 2) = 2018;  // p[2] = 2018;
	    printf("Data: %d/%d/%d\n", *p, *(p + 1), *(p + 2)); // printf("Data: %d/%d/%d\n", p[0], p[1], p[2]);
	    free(p);
	}
	else
	    printf("Erro - nao foi possivel alocar memoria\n"); 
	return 0;
}
