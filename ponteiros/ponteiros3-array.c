//
// Created by renato on 28/06/25.
//
#include <stdio.h>
/*
void main()
{
    int numeros[4] = {14,2,35,4};
    int *pNumeros = numeros;
    *(pNumeros + 1) = 99; //modifica o valor do array
    for(int i = 0; i < 4; i++) {


        printf("%d ",*(pNumeros + i));

    }
} */
int main() {

    int numeros[5] = {2, 4, 6, 8, 10};
    int *p = numeros;
    printf("Array original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ",*(p + i));


    }
    printf("\n");
    printf("Array Novo: ");
    for (int i = 0; i < 5; i++) {
        *(p + i) = *(p+i) + 1;
        printf("%d ",*(p + i));


    }




    return 0;
}
