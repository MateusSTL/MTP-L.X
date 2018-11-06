#include <stdio.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
}Ponto;

Ponto LerPonto()
{
	Ponto Temp;
	printf("Digite a abscissa: ");
	scanf("%f", &Temp.x);
	printf("\nDigite a ordenada: ");
	scanf("%f", &Temp.y);
	return Temp;
}

float CalcArea(Ponto C, Ponto D)
{
	return fabs((C.x - D.x) * (C.y - D.y)); // fabs = módulo;
	// float area;
	// area = (C.x - D.x) * (C.y - D.y);
	// return fabs(area);
}

int main() 
{
	Ponto A, B;
	float area;
	printf("Ponto A: \n");
	A = LerPonto();
	printf("Ponto B: \n");
	B = LerPonto();
	area = CalcArea(A,B);
	printf("Area do Retangulo = %.4f", area);  
	return 0;
}
