#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Laco {
    char nome[50];
    struct Laco *proximoLaco;
};

struct Laco *novoLaco(const char *nome) {
    struct Laco *nomeCor = (struct Laco *)malloc(sizeof(struct Laco));
    
    if (nomeCor == NULL) {
        printf("Erro na alocação de memória!\n");
        return NULL;
    }
    
    strncpy(nomeCor->nome, nome, sizeof(nomeCor->nome) - 1);
    nomeCor->nome[sizeof(nomeCor->nome) - 1] = '\0';
    nomeCor->proximoLaco = NULL;

    return nomeCor;
}

void imprimirLista(struct Laco *inicio) {
    struct Laco *atual = inicio;
    printf("Cores: \n");
    while(atual != NULL) {
        printf("%s\n", atual->nome);
        atual = atual->proximoLaco;
    }
}

void liberarMemoria(struct Laco *inicio) {
    struct Laco *atual = inicio;
    while(atual != NULL) {
        struct Laco *prox = atual->proximoLaco;
        free(atual);
        atual = prox;
    }
}

int main() {
    struct Laco *listaCores = NULL;
    int i = 1;
    char linha[100];
    char novaCor[50];
    
    while(i != 0) {
        printf("Digite um nome de uma cor: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%49[^\n]", novaCor);

        struct Laco *cor = novoLaco(novaCor);
        if (cor == NULL) {
            printf("Erro ao criar novo laço!\n");
            liberarMemoria(listaCores);
            return 1;
        }
        
        cor->proximoLaco = listaCores;
        listaCores = cor;
        
        printf("Deseja adicionar mais uma cor na pilha? 1- Sim ou 0- Não: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &i);
    }

    imprimirLista(listaCores);
    liberarMemoria(listaCores);
    listaCores = NULL;

    return 0;
}
