#include <stdio.h>

int main()
{
	int num, i, resultado;
	char linha[100];

	printf("Digite um número inteiro para sabermos o seu fatorial: ");
	fgets(linha,sizeof(linha),stdin);
	sscanf(linha,"%d",&num);
	resultado = 1;
	for(i = num;i > 0;i--){
	
		resultado =resultado * i;
	
	}
	
	printf("O fatorial de %d é : %d\n",num,resultado);
	
return 0;
}
