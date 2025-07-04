#include <stdio.h>

int main()
{
	int a = 6;
	int b = 34;
	int c = 23;
	int d = -23;
	int e = 0;
	

		
	int *vetor[5] = { &a, &b, &c, &d, &e };

	printf("O endereço dos ponteiros: \n");
	for(int i = 0; i < sizeof(vetor)/sizeof(vetor[0]);i++){
		printf("Array[%d] = %p\n",i,(void*)vetor[i]);
	
	
	}

	printf("O valor dos ponteiros: \n");
	for(int i = 0; i < sizeof(vetor)/sizeof(vetor[0]);i++){
		printf("Array[%d] = %d\n",i,*vetor[i]);
	
	
	}

;

return 0;
}
