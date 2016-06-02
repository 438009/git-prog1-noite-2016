#include <stdio.h>

int main()
{
    int i, numb, numb1=1, numb2, j;
    
printf("ate que numero sera a sequencia de fibonacci?\n");
scanf("%d", &j);

do
{
 numb=numb1+numb2;
 printf("%d, ", numb);
 numb1=numb2;
 numb2=numb;
}while(numb<=j-numb1);
    
    if (numb=j)
    {
      printf("...\n");
    }

return 0;
}