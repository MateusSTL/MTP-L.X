#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1, i=0;
	while( i < 10)
	{
	    srand(time(NULL)); /*Vai sortear o mesmo n�mero 10x pq o srand t� dentro do la�o */
	    n1 = rand()%5;
	    printf("Numero aleatorio: %i\n", n1);
	    i++;
    }
	return 0;
}
