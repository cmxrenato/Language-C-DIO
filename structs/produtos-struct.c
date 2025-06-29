#include <stdio.h>
#include <string.h>
struct Produto{
	char nome[30];
	float preco;

};

int main()
{
	struct Produto p1;
	struct Produto *ptr = &p1;

	ptr->preco = 8.5;
	strcpy(ptr->nome, "Computador Acer");

	printf("O nome do produto é: %s\n",ptr->nome);
	printf("O preço é: %.2f\n",ptr->preco);




return 0;
}
