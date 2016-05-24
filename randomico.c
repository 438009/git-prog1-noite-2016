#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarAleatorio(int limMAX)
{
    int num;
    
    //gerar num aleatorio
    num = rand() % limMAX;
    
    return num;
    
}

int ehPar( int numero )
{
    if ( (numero % 2) == 0 ) //eh par
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
    int i, num;
    srand( (unsigned)time(NULL) );

    for(i=1 ; i <= 10 ; i++)
    {
        num = gerarAleatorio(1000);
        printf("\nNumero %d: %d",i, num);
        if(ehPar(num))
        {
            printf("\t - é par");
        }
        else
        {
            printf("\t - é ímpar");
        }
    }
        
    return 0;   
}