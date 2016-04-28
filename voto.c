#include <stdio.h>

int main()
{
    //declara as variaveis
    int idade;
    
    //ler do teclado
    printf("\nEntre com uma idade:");
    scanf("%d", &idade);
    
    if(idade<16)
    {
        printf("\nVoce NAO pode VOTAR!\n");
    }
    else if ( idade == 16 || idade == 17 || idade >70 )
    {
        printf("\n Voto FACULTATIVO");
    }
    else
    {
        printf("\n VOTO OBRIGATORIO\n");
    }
    
    return 0;
}