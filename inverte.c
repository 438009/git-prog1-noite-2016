#include <stdio.h>
#include <string.h>


int main()
{
    char nome[20];
    int tam, i;
    
    printf("\nEntre com uma palavra: ");
    scanf("%s", nome);
    
    tam = strlen(nome);
    
    printf("\n Palavra invertida = ");
    for(i=(tam-1); i>=0; i--)
    {
        printf("%c", nome[i]);
    }
    
    printf("\n");
    
    return 0;
}