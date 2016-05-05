#include <stdio.h>

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
        printf("\n1 - adição");
        printf("\n2 - subtração");
        printf("\n3 - multiplicação");
        printf("\n4 - divisão");
        
        printf("\n\nOpção:");
        scanf("%d", &menu);
        
        printf("\nEntre com num1:");
        scanf("%d", &num1);
        
        printf("\nEntre com num2:");
        scanf("%d", &num2);
        
        switch(menu)
        {
            case 1: //adicao
                resultado = num1 + num2;
                printf("\nResultado : %d + %d = %.2f", num1, num2, resultado);
                break;
            case 2: //sub
                resultado = num1 - num2;
                printf("\nResultado : %d - %d = %.2f", num1, num2, resultado);
                break;
            case 3: //mult
                resultado = num1 * num2;
                printf("\nResultado : %d * %d = %.2f", num1, num2, resultado);
                break;
            case 4: //div
                resultado = (float)num1 / num2;
                printf("\nResultado : %d / %d = %.2f", num1, num2, resultado);
                break;
            default:
                printf("\nOpcao inválida!!!");
                
        } //fim-switch
        
        printf("\nDeseja continuar(1-s/2-n)?");
        scanf("%d", &continuar);
        
    }while(continuar == 1);
    
    return 0;
}