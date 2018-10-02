#include <stdio.h>

float par(int c, int d, float vet1[], int e)
{
	for(; c < d; c++)
	{
		if(c%2 == 0)
		{
			vet1[e] = c;
			e++;
		}
	}
}

float impar(int f, int g, float vet2[], int h)
{
	for(; f < g; f++)
	{
		if(f%2 != 0)
		{
			vet2[h] = f;
			h++;
		}
	}
}

int main()
{
	int a = 1, b = 20, i = 0, opcao;
	float vet[10], resp1, resp2;
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			resp1 = par(a,b,vet,i);
			for(; i < b; i++)
			    printf("%.1f ", vet[i]);
		    break;
		case 2:
			resp2 = impar(a,b,vet,i);
			for(; i < b; i++)
			    printf("%.1f ", vet[i]);
			break;
	}
	
	return 0;
}
