#include <stdio.h>

void fibo (int termo)
{
    int i, num1=0, num2=1, aux;

    printf("\n");
    
    for(i=0; i<termo; i++)
    {
        aux = num1;
        printf("%d ", aux);
        num1 = num2;
        num2 = aux + num1;
    }

}

int main()
{
    fibo(1);
    fibo(2);
    fibo(5);
    fibo(15);
    
    return 0;
}