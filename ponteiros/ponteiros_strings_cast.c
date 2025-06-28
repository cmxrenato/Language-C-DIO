#include <stdio.h>

int main() {
    int x = 42;
    char *str = "Hello";

    // ❌ Sem cast (pode gerar avisos)
    printf("Endereço de x (sem cast): %p\n", &x);

    // ✅ Com cast (recomendado)
    printf("Endereço de x (com cast): %p\n", (void*)&x);
    printf("Endereço de str: %p\n", (void*)str);

    return 0;
}