#include<stdio.h>

void printArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
}



int main()
{
    	int numeros[10] = {26, 89, 12, 64, 23, 6, 30, 299, -54, 2}; // Array para armazenar os números
	int contador = 0;
	int auxiliar;
	int troca = 1;

	while (troca == 1)
	{
		int trocaParcial = 0;
		for (int j = 0; j < sizeof(numeros)/sizeof(numeros[0]) - 1; j++)
		{
		   
			if(numeros[j] > numeros[j+1])
			{
			auxiliar = numeros[j];
			numeros[j] = numeros[j+1];
			numeros[j+1] = auxiliar;
			trocaParcial++;
			}
			contador++;
		}
			if(trocaParcial == 0){
			
				troca = 0;
			}

		
			
			
	
	}
	printf("%d\n",contador);	
	printArray(numeros, 10);

    return 0;
}
