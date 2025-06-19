#include <stdio.h>



int primo(int n) {
    int marcador = 0;
    for (int i = n - 1; i >= 2; i--) {
        if (n % i == 0) {
            marcador++;
        }
    }
    return marcador;
}



int main()
{
	
	
	int num;
	char linha[50];

	printf("Número: ");
	fgets(linha,sizeof(linha),stdin);
	sscanf(linha,"%d",&num);
	if(num == 0 || num < 0){
		printf("Operação impossível!\n");
	
	
	
	}else{
	int resultado = primo(num);
;
	//printf("%d\n", resultado);
	
	if (resultado == 0){
		printf("O número %d é primo!\n", num);

		}else{
	
		printf("O número %d não é primo!\n", num);

	}
	}
return 0;
}
