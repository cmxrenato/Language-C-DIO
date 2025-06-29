
#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa p = {"Renato", 30};
    struct Pessoa *ptr = &p;

    ptr->idade = 31; // modifica diretamente a struct p
    printf("Nome: %s\n", ptr->nome);
    printf("Idade: %d\n", ptr->idade);
    printf("endereço: %p\n", ptr);
    printf("endereço: %p\n", (void*)&p);
    printf("endereço do ponteiro: %p\n", (void*)&ptr);
       	return 0;
}
