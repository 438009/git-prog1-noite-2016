#include <stdio.h>

void fibo (int termo)
{
    int i, num1=0, num2=1, aux;
    
    printf("\n0 ");
    
    if (termo >=2 )
      printf("1 ");
    
    for(i=3; i<=termo; i++)
    {
        aux = num1 + num2;
        printf("%d ", aux);
        num1 = num2;
        num2 = aux;
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