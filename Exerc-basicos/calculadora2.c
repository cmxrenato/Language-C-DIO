
#include <stdio.h>
#include <string.h>

int main()
{
    float num1, num2, resultado;
    char linha[50], linha2[50], linha3[10], operacao;

    printf("Calculadora Básica versão 2\n");
    
    // Ler primeiro número
    printf("Digite o primeiro número: ");
    fgets(linha, sizeof(linha), stdin);
    sscanf(linha, "%f", &num1);	

    // Ler operação
    printf("Digite a operação (+, -, *, /): ");
    fgets(linha3, sizeof(linha3), stdin);
    sscanf(linha3, "%c", &operacao);

    // Ler segundo número
    printf("Digite o segundo número: ");
    fgets(linha2, sizeof(linha2), stdin);
    sscanf(linha2, "%f", &num2);

    // Realizar operação
    if(operacao == '+') {
        resultado = num1 + num2;
    }
    else if(operacao == '*') {
        resultado = num1 * num2; 
    }
    else if(operacao == '/')  {
        if(num2 != 0) {
            resultado = num1 / num2;
        } else {
            printf("Erro: divisão por zero!\n");
            return 1;
        }
    }
    else if(operacao == '-') {
        resultado = num1 - num2;
    }
    else {
        printf("Operação inválida!\n");
        return 1;
    }
    
    printf("%.2f %c %.2f = %.2f\n", num1, operacao, num2, resultado);   
    
    return 0;
}
