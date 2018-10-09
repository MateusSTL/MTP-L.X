#include <stdio.h>
#include <math.h>

int main() 
{
	double A[] = {1.0, 3.0, 5.0, 7.0, 9.0, 11.0, 13.0, 15.0, 17.0, 19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0};
    double B[] = {0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625, 0.5, 0.25, 0.125, 0.0625};
	double C[16];
	int opcao, i = 0, j = 0, k = 0;
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			while(i < 16 && j < 16 && k < 16)
			{
				C[k] = sqrt(A[i] + B[j]);
				printf("%lf ", C[k]);
				i++;
				j++;
				k++; 
			}
			break;
		case 2:
			while(i < 16 && j < 16 && k < 16)
			{
				C[k] = A[i] + 3*B[j];
				printf("%lf ", C[k]);
				i++;
				j++;
				k++;
			}
			break;
		case 3:
			while(i < 16 && j < 16 && k < 16)
			{
				C[k] = pow(B[j], 2) / A[i];
				printf("%lf ", C[k]);
				i++;
				j++;
				k++;
			}
			break;
		case 4:
			printf("\nTchau.");
	}
	return 0;
}
