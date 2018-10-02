#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() 
{
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    int n = 0, soma = 0, j = 0, soma1 = 0, m = 0, soma2 = 0;
    char c;
    do 
	{
	    scanf("%c", &c);
	    printf("... %d\n", dado());
	    n++;
	    soma = soma + dado();
    } while(n < 5);
    if(soma <= 23 && soma >= 18)
	    {
		    printf("\nVoce ganhou!");
		    return 0;
	    }
	else
	    printf("\nTente lancar dnv.");
    do 
	{
	    scanf("%c", &c);
	    printf("... %d\n", dado());
	    j++;
	    soma1 = soma1 + dado();
    } while(j < 5);
    if(soma1 <= 23 && soma1 >= 18)
	    {
		    printf("\nVoce ganhou!");
		    return 0;
	    }
	else
	    printf("\nTente lancar dnv.");
	do 
	{
	    scanf("%c", &c);
	    printf("... %d\n", dado());
	    m++;
	    soma2 = soma2 + dado();
    } while(m < 5);
    if(soma2 <= 23 && soma2 >= 18)
	    {
		    printf("\nVoce ganhou!");
		    return 0;
	    }
	else
	    printf("\nVoce perdeu.");
}
