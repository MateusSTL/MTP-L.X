#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char nome[40];
	int cpf;
}Cliente;

Cliente LerDados()
{
	Cliente Temp;

	fflush(stdin);
	printf("Digite o nome do cliente: ");
	gets(Temp.nome); // o mesmo que: gets(&Temp.nome[0]);
	fflush(stdin);
	printf("\nDigite o numero do cpf do cliente: ");
	scanf("%d", &Temp.cpf);
	
	return Temp;
}

void imprimeDados(Cliente Temp)
{
	printf("Nome: %s\n", Temp.nome);
	printf("CPF: %d\n", Temp.cpf);
}

int main() 
{
	int i,N;
	Cliente pessoa[10];
	
	printf("Digite o numero de clientes: ");
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		printf("Pessoa %d\n", i+1);
		pessoa[i] = LerDados();
	}
	
	system("cls");
	printf("Pessoas cadastradas: \n\n");
	
	for(i = 0; i < N; i++)
	{
		printf("\nPessoa %i\n", i+1);
		imprimeDados(pessoa[i]);
	}
	
	return 0;
}
