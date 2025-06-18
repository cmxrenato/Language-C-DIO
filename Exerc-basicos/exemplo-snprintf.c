#include <stdio.h>

int main() {
    char mensagem[50];
    char nome[] = "Renato";
    int idade = 25;

    snprintf(mensagem, sizeof(mensagem), "Nome: %s, Idade: %d", nome, idade);

    printf("%s\n", mensagem);

    return 0;
}

