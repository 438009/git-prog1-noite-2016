#include <stdio.h>

int main()
{
    char lt;
    
    printf("\nEntre com 1 letra em CAIXA ALTA:");
    lt = getchar();
    
    printf("\n caracter lido = %c\n", lt);
    printf("\n codigo ASCii = %d\n", lt);
    printf("\n caracter lido CAIXA BAIXA = %c\n", lt+32);
    
    return 0;
}