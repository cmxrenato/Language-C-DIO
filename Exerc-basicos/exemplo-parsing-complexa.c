
#include <stdio.h>

int main() {
    char entrada[] = "Nome: Renato Leal, Idade: 25, Cidade: São Paulo";
    char nome[50], cidade[50];
    int idade;

    // Atenção: isso lê até o primeiro espaço no %s
    //Ler tudo até encontrar uma vírgula [^,]
	// Ler tudo até encontrar um espaço [^\n]
    sscanf(entrada, "Nome: %[^,], Idade: %d, Cidade: %[^\n]", nome, &idade, cidade);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Cidade: %s\n", cidade);

    return 0;
}
