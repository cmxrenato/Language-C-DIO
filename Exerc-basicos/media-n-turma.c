#include <stdio.h>
#include <stdlib.h> //para malloc e freeloc
int main()
{
	int tamanho, contador;
	float nota, soma, resultado;
	char linha[100];

	printf("Digite quantos alunos serão registrados: ");
	fgets(linha,sizeof(linha),stdin);
	sscanf(linha,"%d",&tamanho);

	float *vetor = (float *)malloc(tamanho * sizeof(float));

	if(vetor == NULL){
		printf("Erro na alocação de memória\n");
		return 1;
	}
	contador = 1;
	for(int i = 0; i < tamanho; i++)
	{
	printf("Digite a %dª nota: ", contador);
	fgets(linha,sizeof(linha),stdin);
	sscanf(linha,"%f",&nota);
	vetor[i] = nota;
	contador++;
	}
	soma = 0;
	for (int j = 0; j < tamanho; j++) 
	{
		soma += vetor[j];
	}
	resultado = soma/tamanho;

	printf("A média geral da turma foi: %.1f\n", resultado);
	free(vetor);
	return 0;
}
