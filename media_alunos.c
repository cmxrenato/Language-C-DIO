#include <stdio.h>
#include <string.h>

int main()
{
float a, b, media;
char linha[5], linha2[5], linha3[20];
char nome[20];


printf("Digite o nome do aluno: ");
fgets(nome,sizeof(nome),stdin);
nome[strcspn(nome, "\n")] = 0;  // Remove o '\n' do final

printf("Digite a primeira nota: ");
fgets(linha,sizeof(linha),stdin);
sscanf(linha,"%f",&a);

printf("Digite a segunda nota: ");
fgets(linha2,sizeof(linha2),stdin);
sscanf(linha2,"%f",&b);

media = (a + b)/2;

printf("O aluno %s tirou de média: %f\n ",nome,media);


return 0;

}













