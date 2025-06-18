#include <stdio.h>

int main(){

	float num1, num2, num3, auxiliar;
	char linha1[100], linha2[100], linha3[100];
	
	
	printf("Digite o primeiro número: ");
	fgets(linha1, sizeof(linha1),stdin);
	sscanf(linha1,"%f",&num1);
	
	printf("Digite o segundo número: ");
	fgets(linha2,sizeof(linha2),stdin);
	sscanf(linha2,"%f",&num2);

	printf("Digite o terceiro número: ");
	fgets(linha3,sizeof(linha3),stdin);
	sscanf(linha3,"%f", &num3);

	auxiliar = 0;

	if(num1 > auxiliar){
	
		auxiliar = num1;
	}
	if (num2 > auxiliar) {
	
		auxiliar = num2;
	}
	if (num3 > auxiliar) {
		auxiliar = num3;

	
	}

	printf("O maior número é: %.2f\n",auxiliar);


}
