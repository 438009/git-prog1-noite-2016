#include <stdio.h>
#include <math.h>

int main()
{
    int menu;
    int num1, num2;
    int continuar;
    float resultado;
    
    do
    {
        //menu
        printf("\nQual operação deseja?");
        printf("\n1 - raiz quadrada");
        printf("\n2 - potencia");

        printf("\n\nOpção:");
        scanf("%d", &menu);
        
        printf("\nEntre com num1:");
        scanf("%d", &num1);

        switch(menu)
        {
            case 1: //raiz
                resultado = sqrt(num1);
                printf("\nResultado : raiz de %d = %.2f", num1, resultado);
                break;
            case 2: //pot
                resultado = pow(num1, 2);
                printf("\nResultado : pot(%d) ao quadrado = %.2f", num1, resultado);
                break;
            default:
                printf("\nOpcao inválida!!!");
                
        } //fim-switch
        
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
    
    return 0;
}