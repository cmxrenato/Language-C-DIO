#include <stdio.h>

int inverterVetor(int arr[],int tamanho)
{
	int i;
	for(i = tamanho - 1; i>=0; i--)
	{
		printf("{%d}",arr[i]);
	
	}

	return 0;
}




int main()
{
	int numeros[5] = {1,2,3,4,5};
	for(int j = 0; j < 5; j++)
	{
		printf("{%d}",numeros[j]);
	}
	printf("\n");
	inverterVetor(numeros, 5);
	printf("\n");



return 0;
}
