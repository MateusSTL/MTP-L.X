#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(float **M, int L, int C)
{
	int i, j;
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			printf("%f ", M[i][j]);
		}
		printf("\n");
	}
}

void transposta(float **M, int L, int C)
{
    int i, j, aux;
    for(i = 0; i < L; i++)
    {
    	for(j = 0; j < C; j++)
    	{
    		if (L > C)
            {
                aux = M[L][C];
                M[L][C] = M[C][L];
                M[C][L] = aux;
		}
	}
}

int main() 
{
	int i, j, L, C;
	float **matriz;
	
	scanf("%d,%d", &L, &C);

	matriz = (float *) malloc(L * sizeof(float *));
	
	for(i = 0; i < L; i++)    
	    matriz[i] = (float *)malloc(C * sizeof(float));

	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			printf("matriz[%d][%d] = ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	
	imprimeMatriz(matriz,L,C);
	
	transposta(matriz, L, C);
	
	imprimeMatriz(matriz, L, C);
	
	for(i = 0; i < L; i++)
	    free(matriz[i]);
	
	free(matriz);
	
	return 0;
}
