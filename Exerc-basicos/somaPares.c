#include <stdio.h>

int main()
{

	int num1, i, resultado;
	char linha1[100];


	printf("Digite um número final para a soma dos pares até ele: ");
	fgets(linha1,sizeof(linha1),stdin);
	sscanf(linha1,"%d",&num1);

	resultado = 0;

	for(i = 0; i < num1; i++){
	
		if(i % 2 == 0){
		
			resultado = resultado + i;
		
		
		}
	
	
	}

	printf("O valor da soma dos pares de 1 a %d é: %d ",num1,resultado);


return 0;
}
