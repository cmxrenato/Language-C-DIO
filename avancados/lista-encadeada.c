#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

struct No *novoNo(int valor){
	struct No *novo_no = (struct No *) malloc(sizeof(struct No));
	novo_no->valor = valor;	
	novo_no->prox = NULL;

	return novo_no;

}



int main() {
	struct No *lista = NULL;

    return 0;
}
