#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = malloc(5 * sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);  // Pode imprimir lixo: 123 -456 0 999 42
    }
    
    free(vetor);
    return 0;
}