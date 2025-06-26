#include <stdio.h>

int buscarElemento(int arr[],int elemento,int tamanho)
{
	int contador = 0;
	int i;
	for( i < 0; i < tamanho; i++)
	{
		if(arr[i] == elemento)
		{
			printf("O elemento: %d encontra-se na %dª posição\n",elemento,i);
			contador++;
		
		}	
	
	}
	if(contador == 0){
	printf("Elemento não encontrado.\n");
	
	}
	return 0;
}




int main()
{
int numeros[10] = {23,45,65,23,12,6,77,3,1,0};

buscarElemento(numeros, 12,10);




return 0;
}
