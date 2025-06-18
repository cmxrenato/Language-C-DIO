#include<stdio.h>
#include<string.h>

int main(){

//Declarar variáveis
int num;
char linha[100];

printf("Digite um número: ");
fgets(linha,sizeof(linha),stdin);
sscanf(linha,"%d",&num);

if(num%2==0){
	printf("O número %d é par!\n",num);
	}else{
		printf("O número %d é ímpar!\n",num);

	}






return 0;
}
