#include <stdio.h>
#include <time.h>
#include <string.h>

int main() 
{
	srand(time(NULL));
	int a, b, i, j;
	char mat[i][j], c;
	char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
	scanf("%d", &i);
	scanf("%d", &j);
	for(a = 0; a < i; a++)
	{
		for(b = 0; b < j; b++)
		{
			c = rand(caracteres);
			mat[a][b] = c;
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}
