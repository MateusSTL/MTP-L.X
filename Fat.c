#include <stdio.h>

int main() 
{
	double fat=1;
	int num;
	printf("Digite o numero do fatorial: ");
	scanf("%i", &num);
	while(num > 1)
    {
    	fat = fat * num;
    	num--;
	}
	printf("\nO fatorial vale: %.0lf", fat);
	return 0;
}
