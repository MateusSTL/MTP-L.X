#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float nota, notae, notaf;
	printf("Digite sua nota: ");
	scanf("%f", &nota);
	if(nota >= 70)
	    printf("\nVoce esta aprovado!");
	else if(nota >= 40 && nota < 70)
	    {
		    printf("\nVoce esta de exame final!");
		    printf("\nDigite sua nota do exame: ");
		    scanf("%f", &notae);
		    notaf = (nota + notae) / 2.0;
		    if(notaf >= 60)
		        printf("\nSua nota final eh %.2f e voce passou!", notaf);
		    else
		        printf("\nSua nota final eh %.2f e voce reprovou!", notaf);
	    }
	else
	    printf("\nVoce esta reprovado!");
	return 0;
}
