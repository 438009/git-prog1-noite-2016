#include <stdio.h>

int main()
{
    //declara variaveis
    int hora;
    
    //obter valor do teclado
    printf("\n Entre com a hora:");
    scanf("%d", &hora);
    
    if (hora <12)
    {
        printf("\nBom dia!!!\n");
    }
    else if (hora < 18)
    {
        printf("\n Boa tarde!!\n");
    }
    else if (hora < 24)
    {
        printf("\n Boa noite!!!\n");
    }
    else
    {
        printf("\n Numero invalido, tente novamente\n");
    }
    
    return 0;
}




