#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// primeiro temos que criar a struct
//
struct No{

    char nome[50];
    struct No *prox;

};
//função para adicionar um nó
struct No *novoNo(const char *nome){

    struct No *fruta = (struct No *) malloc(sizeof(struct No));
    if(fruta == NULL){
        printf("Erro na alocacao de memoria");
        return NULL;

    }

    
    strncpy(fruta->nome, nome, sizeof(fruta->nome) - 1);
    fruta->nome[sizeof(fruta->nome) - 1] = '\0';
    fruta->prox = NULL;

    return fruta;


}

void imprimir(struct No *inicio){

    struct No *atual = inicio;
    while(atual != NULL){

        printf("Fruta:%s\n ", atual->nome);
        atual = atual->prox;
    }
}

void limparMemoria(struct No *inicio){

    struct No *atual = inicio;

    while(atual != NULL){

        struct No *proximo = atual->prox;
        free(atual);
        atual = proximo;

    }

}


int main()
{
    struct No *lista_de_frutas = NULL;
    int i = 1;
    char linha[100];
    char nomeFruta[50];

    while(i != 0){

        printf("Digite o nome da fruta: ");
        fgets(linha,sizeof(linha),stdin);
        sscanf(linha,"%49[^\n]",&nomeFruta);

        struct No *novaFruta = novoNo(nomeFruta);
        novaFruta->prox = lista_de_frutas;
        lista_de_frutas = novaFruta;

        
        printf("Deseja adicionar mais uma cor na pilha? 1- Sim ou 0- Não: ");
        fgets(linha, sizeof(linha), stdin);
        sscanf(linha, "%d", &i);


    }

imprimir(lista_de_frutas);
limparMemoria(lista_de_frutas);
lista_de_frutas = NULL;

return 0;
}
