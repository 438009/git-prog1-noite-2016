#include <stdio.h>

int main()
{
    
    int num, i=0, j;
    int binario[20];
    int res, resto;
    
    printf("\nEntre com um numero:");
    scanf("%d", &num);
    
    do
    {
        res = num / 2;
        resto = num % 2;
        binario[i] = resto;
        num = res;
        i++;
    } while(res != 0);
    
    //imprimir vetor na ordem inversa
    printf("\n numero em binario = ");
    for(j=i-1; j>=0; j--)
    {
        printf("%d", binario[j]);
    }
    
    return 0;
}