#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz(float **M, int L, int C)
{
	int i, j;
	for(i = 0; i < L; i++)
	{
		for(j = 0; j < C; j++)
		{
			printf("%8.lf", M[i][j]);
		}
		printf("\n");
	}
}

int main() 
{
	int i, j, L, C;
	float **matriz;  //** significa que matriz é um ponteiro pra ponteiro; matriz é vetor de ponteiros;
	
	printf("Entre com o numero de linhas e de colunas: ");
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
	
	for(i = 0; i < L; i++)
	    free(matriz[i]);
	
	free(matriz);
	
	return 0;
}
