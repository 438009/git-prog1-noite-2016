#include <stdio.h>

int main()
{
    //declara variaveis
    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;
    
    //ler dois numeros inteiros
    printf("\nEntre com num1: ");
    scanf("%d", &num1);
    
    printf("\nEntre com num2: ");
    scanf("%d", &num2);
    
    //calcular operacoes matematicas basicas
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = (float)num1 / num2;
    
    //imprimir resultado
    printf("\nSoma = %d", soma);
    printf("\nSubtracao = %d", subtracao);
    printf("\nMultiplicacao = %d", multiplicacao);
    printf("\nDivisao = %f", divisao);
    
    
    return 0;
}