#include <stdio.h>

/*
Fazer um programa em C para ler a av1 de 10 alunos, 
calcular e imprimir a média, como no exemplo:
Entre com a av1 do aluno 1: 6.6
*/

int main()
{
    int i, qtdMaior=0, qtdMaior6=0;
    float av1[10];
    float media, somaAv1=0;
    float maior = -999;
    float porcMaior6;
    
    for(i=0;i<=9;i++)
    {
        printf("\nEntre com a av1 do aluno %d:", i+1);
        scanf("%f", &av1[i]);
        somaAv1 = somaAv1 + av1[i];
        
        if(av1[i] > maior)
        {
            maior = av1[i];
        }
        
    }
    
    media = somaAv1 / i;
    
    printf("\nMedia da turma = %.2f", media);
    
    for(i=0;i<=9;i++)
    {
        if(av1[i] >= media)
        {
            printf("\nNota maior que media - %.2f \n", av1[i]);
        }
        
        if(av1[i] == maior)
        {
            qtdMaior++;
        }
        
        if(av1[i] >= 6)
        {
            qtdMaior6++;
        }
    }
    
    porcMaior6 = (float)qtdMaior6 / i;
    
    printf("\n %d alunos tiraram a maior nota que foi %.2f", qtdMaior, maior);
    printf("\n Porcentagem de alunos que tiraram nota >= 6 - %.2f%%", porcMaior6 * 100);
    
    return 0;
}