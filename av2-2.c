#include <stdio.h>
#include <string.h>
int main()
{
    char tweet[140];
    int i, tam;
    int hash=0;
    
    printf("\nEntre com um tweet:");
    //scanf("%s", tweet);
    gets(tweet);
    
    tam = strlen(tweet);
    
    for(i=0; i < tam; i++)
    {
        if (tweet[i] == '#')
        {
            hash++;
        }
    }
    
    printf("\nEste tweet possui %d hashtags", hash);
    
    return 0;
    
}