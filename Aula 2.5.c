#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1, i=0;
	srand(time(NULL)); /* Como o srand est� fora do la�o e � �nico, ele ir� sortear 10x n�meros aleat�rios entre 0 e 4*/
	while(i < 10)
	{
	    n1 = rand()%5;
	    printf("Numero aleatorio: %i\n", n1);
	    i++;
    }
	return 0;
}
