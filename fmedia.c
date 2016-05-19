#include <stdio.h>

void cabecalho()
{
    printf("\n----------------------");
    printf("\n\tTutorial Media");
    printf("\n----------------------");
}

float media_lasalle(float nota1, float nota2)
{
    float media;
    
    media = (nota1+nota2) / 2;
    
    return media;
}

int main()
{
    float av1, av2, av3, media;
    av1 = 6;
    av2 = 5;
    av3 = 0;
    
    media = media_lasalle(av1, av2, av3);
    
    cabecalho();
    printf("\nMedia = %f", media);
    
    return 0;
    
}