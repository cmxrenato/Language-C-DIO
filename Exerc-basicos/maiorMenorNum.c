#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    
    int numeros[10] = {-6,9,2,4,3,6,90,42,32,6}; // Array para armazenar os números
    int  maiorNumero, menorNumero;

    maiorNumero = -99999; // Inicializa com um valor muito baixo
    menorNumero = 99999; // Inicializa com um valor muito alto
   

    for(int i = 0; i < 10; i++)
    {
        if(numeros[i] > maiorNumero)
        {
            maiorNumero = numeros[i];
        }
        if(numeros[i] < menorNumero)
        {
            menorNumero = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maiorNumero);
    printf("O menor número é: %d\n", menorNumero);

    return 0;
}    