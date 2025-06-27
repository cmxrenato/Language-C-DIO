#include <stdio.h>


void printArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
}



int pivot(int arr[], int tamanho)
{
	
	int pivot = arr[tamanho - 1];

	return pivot;
}




void quickSort(int arr[],int tamanho)
{



}


int main()
{
	int numeros[10] = {23,5,45,89,23,12,0,8,7,-8};
	int tamanho = sizeof(numeros) / sizeof(numeros[0]);

	int resultado = pivot(numeros, tamanho);
	printf("O pivot é: %d\n",resultado);




return 0;
}
