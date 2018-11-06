#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[101];
	int nconta;
	float saldo;
}Conta;

void ImprimirDados(Conta *p)
{
	printf("Nome do cliente: %s\n", p->nome);
	printf("Num. da conta: %d", p->nconta);
	printf("Saldo: %f", p->saldo);
}

int main() 
{
    Conta Cliente;
    strcpy(cliente.nome, "Jose");
    
	return 0;
}
