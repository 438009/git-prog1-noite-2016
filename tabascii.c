#include <stdio.h>

int main()
{
    int i;
    
    printf("\n Tabela ASCII");
    printf("\n---------------");
    printf("\nDEC\tCHAR");
    for(i=33;i<=300;i++)
    {
        printf("\n%d\t%c", i, i);
    }
    return 0;
}