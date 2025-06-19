#include <stdio.h>

int ehprimo(int num)
{
	int verificador = 0;
	int resultado = num;
	while (verificador == 0 ) {
		resultado = num % (resultado-1);
		if((resultado>=0) && (resultado == 0)){
			verificador = 1;
			return 1;

		
		}else if (resultado < 0) {
			verificador = 1;

		}
		resultado--;
	}
	return 0;

}


int main()
{
	int num;
	char linha[50];

	printf("Número: ");
	fgets(linha,sizeof(linha),stdin);
	sscanf(linha,"%d",&num);

	int resultado = ehprimo(num);
	printf("%d\n", resultado);
	if (resultado == 1){
	
		printf("O número %d não é primo!\n", num);
	}else{
	
		printf("O número %d é primo!\n", num);
	
	}

return 0;
}
