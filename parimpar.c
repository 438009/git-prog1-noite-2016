#include <stdio.h>

int main()
{
    int num, resto;
    
    printf("\nEntre com um numero inteiro:");
    scanf("%d", &num);
    
    resto = num % 2;
    
    if (resto == 1)
    {
        printf("\n Este numero eh IMPAR");
    }
    else
    {
        printf("\nEste numero eh PAR");
    }
    
    return 0;
}