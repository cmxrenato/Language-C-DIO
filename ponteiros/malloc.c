#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int n = 5;

    vetor = (int *) malloc(n * sizeof(int)); //(int *): converte o ponteiro void* retornado por malloc para int*.
    //malloc(n * sizeof(int)): aloca memória suficiente para n inteiros.
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        vetor[i] = i * 10;// é igual a *(vetor + i)
    }

    for (int i = 0; i < n; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor); // libera a memória
    vetor = NULL;
    return 0;
}
