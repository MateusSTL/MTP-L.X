#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int num;
	srand(time(0)); /*ou srand(time(NULL)) mostra a hora do computador */
	num = rand( ); /*gera um número aleatório */
	printf("Numero aleatorio: %i\n", num);
	return 0;
}
