#include <stdio.h>
/*

Faça um programa em C que leia o salário dos 1.800
funcionários de uma empresa através do teclado.
Ao final da leitura, o programa deverá imprimir na tela:
- A média salarial dos funcionários da empresa;
- A percetagem de funcionários que possuem salário acima da média.

*/

#define MAX_FUNC 10

int main()
{
    float media=0;
    float salario[MAX_FUNC];
    int i; 
    float perc=0;
    
    for(i=0; i<MAX_FUNC; i++)
    {
        printf("\nEntre com salario:");
        scanf("%f", &salario[i]);
        media = media + salario[i];
    }
    
    media = media / i;
    
    printf("\n Media salarial = %f", media);
    
    for(i=0; i< MAX_FUNC;i++)
    {
        if(salario[i] > media)
        {
            perc++;
        }
    }
    
    printf("\n Percentagem de func com sal maior que media = %f%%", (perc/MAX_FUNC)*100 );
 
    return 0;   
}