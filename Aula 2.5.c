#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1, i=0;
	srand(time(NULL)); /* Como o srand está fora do laço e é único, ele irá sortear 10x números aleatórios entre 0 e 4*/
	while(i < 10)
	{
	    n1 = rand()%5;
	    printf("Numero aleatorio: %i\n", n1);
	    i++;
    }
	return 0;
}
