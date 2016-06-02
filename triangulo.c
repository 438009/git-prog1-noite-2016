#include <stdio.h>

int main()
{
    int ini=1, fim, espaco=0, i;
    int j;
    
    printf("\nEntre com um numero impar:");
    scanf("%d", &fim);
 
    do
    {
       printf("\n");
       //imprimir espaco
       for(j=1; j<=espaco; j++)
         printf(" ");
            
       for(i=ini; i<=fim; i++)
            printf ("%d ", i);

        ini++;
        fim--;
        espaco = espaco + 2;
    } while(ini<=fim);
    
}