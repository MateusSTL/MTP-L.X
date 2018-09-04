#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int ddd;
	printf("Digite o seu ddd: ");
	scanf("%i", &ddd);
	switch(ddd)
	{
		case 34:
		    printf("\nSeu ddd eh do Triangulo Mineiro.");
		    break;
		case 21:
		    printf("\nSeu ddd eh do Rio de Janeiro.");
		    break;
		case 11:
		    printf("\nSeu ddd eh da Grande São Paulo.");
		    break;
		case 62:
		    printf("\nSeu ddd eh de Goiania.");
		    break;
		case 16:
		    printf("\nSeu ddd eh de Ribeirao Preto.");
		    break;
		default:
		    printf("\nRegiao nao cadastrada.");
    }
	return 0;
}
