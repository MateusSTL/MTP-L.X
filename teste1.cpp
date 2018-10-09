#include <stdio.h>

void troca(int *pa, int *pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main()
{
	int a = 4, b = 5;
	troca(&a,&b);
	printf("a = %i\nb = %i\n", a, b);
	return 0;
}
