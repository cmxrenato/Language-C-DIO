#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

struct No *novoNo(int valor){
	struct No *novono = (struct No *) malloc(sizeof(struct No));
	novono->valor = valor;	
	novono->prox = NULL;

	return novono;

}

void imprimirLista(struct No *inicio) {
    struct No *atual = inicio;
    while (atual != NULL) {
        printf("Valor: %d\n", atual->valor);
        atual = atual->prox;
    }
}
void liberarLista(struct No *inicio) {
    struct No *atual = inicio;
    while (atual != NULL) {
        struct No *prox = atual->prox;
        free(atual);
        atual = prox;
    }
}


int main() {
	struct No *lista = NULL;
	char linha[20];
	int valor;
	int j = 1;


while (j != 0) {
    printf("Digite um novo valor para o Nó: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &valor);

    struct No *novo = novoNo(valor);
    novo->prox = lista;
    lista = novo;

    printf("\nAperte qualquer número para continuar ou 0 - parar: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%d", &j);
}


  	imprimirLista(lista);   // Opcional, mas útil
    	liberarLista(lista);    // Muito importante
    	lista = NULL;  
    return 0;
}
