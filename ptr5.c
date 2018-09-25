#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int i, vetor[1000], flag = 0;
	unsigned char *p, valor;
	srand(time(NULL));
	for(i = 0; i < 1000; i++)
	     vetor[i] = rand();
    p = (unsigned char *) vetor;
    scanf("%c", &valor);
    for(i = 0; i < 4000; i++)  //ponteiro do tipo char, ai o vetor tem 1000 numeros do tipo int, logo 4000 bytes
    {
    	if(p[i] == valor)
    	    flag++;
	}
	printf("%i\n", flag);
	return 0;
}
