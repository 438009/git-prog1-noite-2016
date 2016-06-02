#include <stdio.h>

int main()
{
    int idade;
    
    printf("\n Entre copm idade:");
    scanf("%d", &idade);
    
    if(idade<16)
        printf("\nVocê não pode votar!");
    else if( idade >= 18 && idade <=70)
        printf("\nVoto obrigatorio.");
    else
        printf("\nVoto Facultativo");
        
    return 0;
}