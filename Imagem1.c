#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void salvaImagemPB(FILE *p, char M[][29], int linhas, int colunas)
{
	int i, j;
	fprintf(p, "P1\n%i %i", colunas, linhas);
	for(i = 0; i < linhas; i++)
	{
		for(j = 0; j < colunas; j++)
		    fprintf(p, "%d ", M[i][j]);
		fprintf(p, "\n");
	}
}

int main()
{
	FILE *p;
	char M[29][29], i, j;
	
	srand(time(NULL));
	
	for(i = 0; i < 20; i++)
	{
		for(j = 0; j < 15; j++)
		    M[i][j] = rand()%2; //sorteia numeros entre 1 e 2;
	}
	
	p = fopen("Imagem1.pbm", "w"); // pra trocar a imagem, basta trocar o nome da imagem
	
	if(p != NULL)
	{
		salvaImagemPB(p, M, 20, 15);
	}
	else
	    printf("Erro - nao foi possivel criar o arquivo\n");
	
	return 0;
}
