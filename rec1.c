#include <stdio.h>

int soma(int vet[], int i)
{
	return vet[i] + soma(vet[i-1], i);
}

int main() 
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int pos = 16;
	printf("\n%d", soma(A,pos));
	return 0;
}
