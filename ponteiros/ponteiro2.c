//
// Created by renato on 28/06/25.

#include <stdio.h>

int main()
{
    float nota = 8.5;
    float *pNota = &nota;
    //pNota = &nota;


    printf("O valor da nota é: %f\n",nota);
    printf("O endereço de nota é: %p\n",&nota);
    printf("O valor armazenado em pNota é: %p\n",pNota);
    printf("O valor apontado em pNota é: %f\n",*pNota);


    return 0;
}
