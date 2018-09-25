#include <stdio.h>

int main() 
{
	int i;
	unsigned int a = 0xFACA8421;
	unsigned char *p;
	printf("Endereco de a: %p", &a);
	printf("\nConteudo em decimal: %u", a);
	p = &a;
	for(i=0; i < 4; i++)
	{
	    printf("\n%x", *(p+i));
	}
	return 0;
}
