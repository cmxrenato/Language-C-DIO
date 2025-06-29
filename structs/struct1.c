//
// Created by renato on 29/06/25.
//
#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa p1;

    // Atribuindo valores
    p1.idade = 25;
    p1.altura = 1.75;
    strcpy(p1.nome, "Renato");

    // Acessando valores
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Altura: %.2f\n", p1.altura);

    return 0;
}
