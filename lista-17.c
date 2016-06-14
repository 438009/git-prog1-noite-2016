#include <stdio.h>
/*
Fazer um programa em C para ler uma quantidade N de alunos. 
Ler a nota de cada um dos N alunos e calcular a média aritmética das notas. 
Contar quantos alunos estão com a nota acima de 5.0. 
Obs.: Se nenhum aluno tirou nota acima de 5.0, 
      imprimir mensagem: Não há nenhum aluno com nota acima de 5.
*/

int main()
{
    int N, i,contMedia=0;
    float nota, soma=0,media;
    
    printf("\nEntre com numero de alunos:");
    scanf("%d", &N);
    
    for(i=1; i<= N; i++)
    {
        printf("\nEntre com nota do aluno %d:", i);
        scanf("%f", &nota);
        soma = soma + nota;
        
        if(nota>5)
           contMedia++;
        
    }
    
    media = soma / N;
    
    printf("\nMedia da turma = %.2f", media );
    if(contMedia!=0)
    {
        printf("\nExistem %d alunos com media acima de 5.0", contMedia);
    }
    else
    {
        printf("\nNão há nenhum aluno com nota acima de 5.");
    }
    
    return 0;
}