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



int main() {
	struct No *lista = NULL;

    return 0;
}
