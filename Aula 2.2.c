#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1;
	srand(time(NULL));
	n1 = rand()%5; /* Resto da divis�o por 5=[0,1,2,3,4], logo ser�o sorteados numeros entre 0 e 4 */
	printf("Numero aleatorio: %i\n", n1);
	return 0;
}
