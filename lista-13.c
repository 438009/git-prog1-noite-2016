#include <stdio.h>
/*
Leia o peso, salário e sexo(m/f) de 10 pessoas e: 
a) Mostrar a média do peso das mulheres que tem mais de 50 kg 
b) Mostrar a média do salário dos homens que recebem entre R$ 1000 e R$ 3000.
*/
int main()
{
    float peso, somapeso=0;
    float salario, somasalario=0;
    char sexo;
    int iFem=0, iMasc=0, i;
    
    for(i=1; i<=3; i++)
    {
        printf("\nEntre com peso:");
        scanf("%f", &peso);
        
        printf("\nEntre com salario:");
        scanf("%f", &salario);
        
        printf("\nEntre com sexo(m/f):");
        scanf(" %c", &sexo);
        
        //Mostrar a média do peso das mulheres que tem mais de 50 kg 
        if (sexo == 'f' && peso>50)
        {
            somapeso+=peso;  //somapeso = somapeso + peso
            iFem++;
        }
        else if (sexo == 'm' ) //Mostrar a média do salário dos homens que recebem entre R$ 1000 e R$ 3000.
        {
            if(salario>=1000 && salario<=3000)
            {
                somasalario+= salario;
                iMasc++;
            }
        }
        
    } //fim-for

    // a) Mostrar a média do peso das mulheres que tem mais de 50 kg 
    printf("\nmédia do peso das mulheres que tem mais de 50 kg = %f", somapeso/iFem);
    
    // b) Mostrar a média do salário dos homens que recebem entre R$ 1000 e R$ 3000.
    printf("\nMédia do salário dos homens que recebem entre R$ 1000 e R$ 3000 = %f", somasalario/iMasc);
    
    
    return 0;
}