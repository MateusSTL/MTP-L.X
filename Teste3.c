#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int *p;
	p = malloc(sizeof(int));
	*p = 10;
	printf("%d\nEndereco: %p", *p,p);
	free(p); 
	return 0;
}
