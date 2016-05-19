#include <stdio.h>
#include <string.h>

/*
Faça um programa para ler um nome e 
imprimir com a primeira letra maiúscula e o 
restante minúscula.
*/

int ehMaiuscula(char letra)
{
    if( letra >=65 && letra <= 90 ) //eh maiuscula
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int tam;
    int i;
    char nome[20];
    
    printf("\nEntre com nome: ");
    scanf("%s", nome);
    
    tam = strlen(nome);
    
    if( !ehMaiuscula(nome[0]) ) //nao eh maiuscula
    {
        nome[0] = nome[0] - 32;  //tranforma maiuscula
    }
    
    for(i=1; i< tam; i++ )
    {
        if( ehMaiuscula(nome[i]) ) //eh maiuscula
        {
            nome[i] = nome[i] + 32;
        }
    }

    printf("\nNome formatado = %s\n", nome);    
    
    return 0;
}