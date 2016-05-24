#include <stdio.h>

float media_lasalle(float av1, float av2, float av3)
{
    float media;
    
    //calcular media
    if(av1>= av2 && av2>= av3)
        media = (av1+av2) / 2;
    else if (av1 >= av2 && av2 <= av3)
        media = (av1+av3) / 2;
    else
        media = (av2+av3) / 2;
    
    return media;
    
}

int main()
{
    float media;
    
    //teste da funcao
    media = media_lasalle(10, 6, 4);
    if (media == 8)
        printf("\n 1. Caso de teste OK!");
    else
        printf("\n 1. Caso de teste FALHOU!");
    
    media = media_lasalle(10, 6, 8);
    if (media == 9)
        printf("\n 2. Caso de teste OK!");
    else
        printf("\n 2. Caso de teste FALHOU!");
    
    media = media_lasalle(1, 2, 8);
    if (media == 5)
        printf("\n 3. Caso de teste OK!");
    else
        printf("\n 3. Caso de teste FALHOU!");
    
    media = media_lasalle(10, 10, 8);
    if (media == 10)
        printf("\n 4. Caso de teste OK!");
    else
        printf("\n 4. Caso de teste FALHOU!");
    
    return 0;
    
}