#include <stdio.h>

int main()
{
    int maior = -999;
    int menor = 1000;
    int num, continuar;
    
    do
    {
        printf("\nEntre com um numero[0-100]:");
        scanf("%d", &num);
        
        //descobrir maior e menor
        if(num > maior)
        {
            maior = num;
        }
        
        if(num < menor)
        {
            menor = num;
        }
        
        //continuar?
        printf("\nDeseja continuar(1-s/2-n)? ");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
    
    //imprimir resultados
    printf("\nMaior numero = %d", maior);
    printf("\nMenor numero = %d", menor);
    
    return 0;
}
