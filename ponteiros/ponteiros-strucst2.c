#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa p = {"Renato", 30};
    struct Pessoa *ptr = &p;

    // Acessando os campos diretamente:
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);

    // Acessando os campos via ponteiro:
    printf("Nome: %s\n", (*ptr).nome);
    printf("Idade: %d\n", (*ptr).idade);

    return 0;
}
