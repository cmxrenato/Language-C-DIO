#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char linha[100];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;  // Remove o '\n' do final

    printf("Digite sua idade: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &idade);

    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);

    return 0;
}

