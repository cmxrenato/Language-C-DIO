#include <stdio.h>
#include <stdlib.h>

int main()
{
	float *numeros = NULL;	
	int quantidade;
	char linha[50];
	int j = 1;
	
	printf("Digite a quantidade de números que deseja armazenar: ");
	fgets(linha,sizeof(linha),stdin);
	sscanf(linha,"%d",&quantidade);

	numeros = (float *) malloc(quantidade*sizeof(float));
	
	if(numeros == NULL){
		printf("Erro ao alocar memória");
		return 1;
	
	}

	for(int i = 0; i < quantidade; i++){
	
		printf("Digite o %dº número: ", j);
		fgets(linha, sizeof(linha), stdin);
		sscanf(linha,"%f",&numeros[i]);

		j++;
	}

	for (int i = 0; i < quantidade; i++){
	
		printf("O vetor[%d] = %.2f\n",i,numeros[i]);
	
	
	}

	free(numeros);
	numeros = NULL;

	return 0;
}
