#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int div, n1, n2, flag =0, soma, chute, mp, chute2;
	srand(time(NULL));
	printf("Digite um possivel divisor inteiro de 8192: ");
	scanf("%i", &div);
	if(8192%div == 0)
	    flag++;
	n1 = rand( )%33+1328;
	printf("\nNumero sorteado: %i", n1);
	soma = n1 + 101;
	printf("\nDigite o valor da soma do numero sorteado com 101: ");
	scanf("%i", &chute);
	if(soma == chute)
	    flag++;
	n2 = rand( )%100+0;
	printf("\nNumero sorteado: %i", n2);
	mp = n2 * 3;
	printf("\nDigite o valor da multiplicacao do segundo numero sorteado por 3: ");
	scanf("%i", &chute2);
	if(mp == chute2)
	     flag++;
    printf("\nSua pontuacao final eh: %i", flag); 
	return 0;
}
