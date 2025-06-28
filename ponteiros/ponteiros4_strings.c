//
// Created by renato on 28/06/25.
//
#include <stdio.h>
/*
int main() {

    //char *texto = "Olá, linguagem C";
    char texto[16] = "Olá, linguagem C";
    char *pTexto = texto;

    printf("Texto: %s\n", texto);
    printf("Endereço da primeira letra do array: %p\n", texto);
    printf("Endereço do ponteiro: %p\n", &texto);
    printf("Primeira letra: %c\n", *texto); // desreferência: imprime 'O'

    printf("Texto: %s\n", texto);
    printf("Endereço da primeira letra do array: %p\n", pTexto);
    printf("Endereço do ponteiro: %p\n", &pTexto);
    printf("Primeira letra: %c\n", *pTexto); // desreferência: imprime 'O'





    return 0;
}
*/

int main() {
    // Declaração mais segura (o compilador conta os caracteres automaticamente)
    char texto[] = "Ola, linguagem C";  // tamanho automático (inclui o '\0')
    char *pTexto = texto;  // ponteiro aponta para o array
    //equivalente a pTexto = &textp[0];
    printf("Texto: %s\n", texto);
    printf("Endereço do array (início da string): %p\n", (void*)texto);
    printf("Endereço do ponteiro pTexto: %p\n", (void*)&pTexto);
    printf("Primeira letra: %c\n", *pTexto);
    printf("Segunda letra: %c\n", *(pTexto + 1));
    printf("Terceira letra: %c\n", *(pTexto + 2));

    return 0;
}
