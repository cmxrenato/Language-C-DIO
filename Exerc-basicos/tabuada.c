#include <stdio.h>

int main()
{
	int num1, i, resultado;
	char linha1[20];

	printf("Digite um número para calcular a tabuada: ");
	fgets(linha1,sizeof(linha1),stdin);
	sscanf(linha1,"%d",&num1);
	
	
	printf("A tabuada de %d é:\n ", num1);
	for(i = 1;i < 10; i++){
	
		resultado = num1 * i;
		printf("\n %d x %d = %d \n",num1,i,resultado);
	
	
	}



return 0;
}
