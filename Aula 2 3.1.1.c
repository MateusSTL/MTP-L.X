#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int n1, n2;
	srand(time(NULL));
	n1 = rand( )%100 + 0; /*Sorteia número entre 0 e 99 */
	n2 = rand( )%193 + 101; /*Sorteia número entre 101 e 293 */
	printf("Seus numeros aleatorios sao: %i e %i", n1, n2);
	return 0;
}
