#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int num, p, k=2, flag=0;
	printf("Digite o numero: ");
	scanf("%i", &num);
	p = num / 2;
	while(p >= k)
	{
		if(num%k != 0)
		    k++;
		else
		    flag++;
		    break;
	}
	if(flag == 1)
	    printf("\nO numero nao eh primo.");
	else
	    printf("\nO numero eh primo");
	return 0;
}
