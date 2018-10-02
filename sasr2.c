#include <stdio.h>

int main() 
{
	int i = 0, opcao, num1 , num2 = 20;
	float vet[20];
	switch(opcao)
	{
		case 1:
			for(num1 = 1; num1 < num2; num1++)
			{
				if(num1%2 == 0)
				{
				    vet[i] = num1;
				    i++;
			    }
				printf("%f ", vet[i]);
			}
			break;
		case 2:
			for(num1 = 1; num1 < num2; num1++)
			{
				 if(num1%2 != 0)
				 {
				 	vet[i] = num1;
				 	i++;
				 }
				 printf("%f", vet[i]);
			}
			break;
	}
	return 0;
}
