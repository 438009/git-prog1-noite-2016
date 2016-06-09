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


int sigma(int n)
{
    int sigma;
    
    for(sigma=0; n>=1;n--)
        sigma = sigma + n;
        
    return sigma;
    
}

int fat(int n)
{
    int fatorial;
    
    for(fatorial=1; n>=1;n--)
        fatorial = fatorial * n;
        
    return fatorial;
    
}

int menu()
{
    int opc;
    
    printf("\n*****************************");
	printf("\n* Funções matematicas");
	printf("\n*****************************");
	printf("\n1 - Imprimir Fibonacci");
	printf("\n2 - Calcular fatorial");
	printf("\n3 - Calcular Sigma");
	printf("\n****************************");
	printf("\n* Digite opção:");
	
	scanf("%d", &opc);
	
	return opc;
	
}

int main()
{
    
    int opc, num, result;
    char continuar='n';
    //int continuar=0;
    
    do
    {
        
        opc = menu();
        
        printf("\n****************************");
    	printf("\nEntre com numero:");
    	scanf("%d", &num);
        
        switch (opc){
            case 1: //fibonacci
                fibo(num);
                break;
            case 2: //
                result = fat(num);
                printf("\nFatorial de %d = %d", num, result);
                break;
            case 3: //
                result = sigma(num);
                printf("\nSigma de %d = %d", num, result);
                break;
                
                
        }
        
        printf("\n***************************");
    	printf("\nContinuar?(s/n) :");
    	
    	//limpar buffer
    	fflush(stdin);
        __fpurge(stdin);
        
    	scanf("%c", &continuar);
    	printf("\ndebug continuar=%c", continuar);
    	
    }while(continuar=='s' || continuar=='S');

    return 0;
}
