#include <stdio.h>

// Função recursiva para calcular o fatorial
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {  // Caso base
        return 1;
    } else {
        return n * fatorial(n - 1);  // Chamada recursiva
    }
}

int main() {
    int num = 10;
    unsigned long long resultado = fatorial(num);
    printf("O fatorial de %d é %llu\n", num, resultado);
    return 0;
}
