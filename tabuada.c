#include <stdio.h>

int main()
{
    int i, multiplicar;
    int tab;
    
    tab=0;
    while(tab<1 || tab>10)
    {
        printf("\nEntre com o num[1-10]:");
        scanf("%d", &tab);
    }
    
    
    
    printf("\nTabuada Multiplicacao do %d", tab);
    printf("\n__________________________");
    
    for(i=1;i<=10;i++)
    {
        multiplicar = tab * i;
        printf("\n %d x %d = %d",tab,  i, multiplicar);
    }
    
    return 0;
}