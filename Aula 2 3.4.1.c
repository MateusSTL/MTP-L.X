#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int fat=1, num;
	printf("Digite o numero do fatorial: ");
	scanf("%i", &num);
	while(num > 1)
    {
    	fat = fat * num;
    	num--;
	}
	printf("\nO fatorial vale: %i", fat);
	return 0;
}
