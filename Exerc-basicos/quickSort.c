#include <stdio.h>

// Função para trocar dois elementos
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Função para particionar o array e retornar o índice do pivô
int partition(int arr[], int low, int high) {
	int pivot = arr[high]; // Escolhe o último elemento como pivô
	int i = (low - 1);     // Índice do menor elemento

	for (int j = low; j <= high - 1; j++) {
		// Se o elemento atual é menor ou igual ao pivô
		if (arr[j] <= pivot) {
			i++; // Incrementa o índice do menor elemento
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1); // Retorna a posição final do pivô
}

// Função principal do Quicksort
void quicksort(int arr[], int low, int high) {
	if (low < high) {
		// Obtém o índice do pivô
		int pivot_index = partition(arr, low, high);

		// Ordena os subarrays recursivamente
		quicksort(arr, low, pivot_index - 1);  // Antes do pivô
		quicksort(arr, pivot_index + 1, high); // Depois do pivô
	}
}

// Função para imprimir o array
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Exemplo de uso
int main() {
	int arr[] = {10, 7, 8, 9, 1, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Array original:\n");
	printArray(arr, size);

	quicksort(arr, 0, size - 1);

	printf("Array ordenado:\n");
	printArray(arr, size);

	return 0;
}