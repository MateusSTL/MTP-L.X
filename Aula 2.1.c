#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1, n2;
	//srand(time(NULL));  /* Mantem os mesmos numeros */
	n1 = rand( );
	n2 = rand( );
	printf("Numeros aleatorios: %i e %i\n", n1, n2);
	return 0;
}
