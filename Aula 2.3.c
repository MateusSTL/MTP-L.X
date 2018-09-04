#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n1;
	srand(time(NULL));
	n1 = rand()%14+5; /*sorteia um valor entre 5 e 18 */
	printf("Numero aleatorio: %i\n", n1);
	return 0;
}
