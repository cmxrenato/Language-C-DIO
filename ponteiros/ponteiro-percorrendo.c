//
// Created by renato on 28/06/25.
//
#include <stdio.h>

int main() {
    char *str = "C eh poderoso!";
    const char *ptr = str;
    while (*str != '\0') {
        printf("%c ", *str);
        str++; // avança para o próximo caractere
    }
    printf("\n");
    for (int i = 0; i <16 && ptr[i] != '\0'; i++) {
        printf("%c ",ptr[i]);
    }
    return 0;
}
