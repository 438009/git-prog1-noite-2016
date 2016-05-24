#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20];
    int i, j, tam, palindromo=0;
    
    printf("\nEntre com palavra: ");
    scanf("%s", palavra);
    
    tam = strlen(palavra);
    j=tam-1;
    for(i=0; i<tam;i++)
    {
        if(palavra[i] == palavra[j])
            palindromo++;
        else
            break;
        j--;
    }
    if (palindromo == tam)
        printf("\n %s eh palindromo", palavra);
    else
        printf("\n %s NAO EH palindromo", palavra);
    
    
}