//
// Created by renato on 28/06/25.
#include <stdio.h>

int main() {
    int x = 20;
    int *p; // declaração de ponteiro para int

    p = &x; // p recebe o endereço de x

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Endereço armazenado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p); // desreferência

    return 0;
}
