#include <stdio.h>
// Glauber
// Desafio perdido :/ mas ta ai



void main()
{
   char mapa[] = "AYN@AKHENQD@ACEAZZ@AKTZF@AKTVR@AEZXT@AAZVTRB@AAZVTRB@"
                 "AZVTRBF@ANBTTTT@AANBTTTT@ACNBTTTT@AGTTTTL@ASITVT@AAYCTRT@AGGSZX"
                 "@ASQXX@ASQXV@ASQXT@AUSRT@ASUJDRB@AWSRB@ASASP@ASASP@ASSP@";
        int i, j, a;
                        
        for (i=0;i<=178;i++)
        {
           a = mapa[i] / 2;
           if(mapa[i] < 65){
             putchar('\n');
           }else
          if (mapa[i] % 2 == 0){
                a = a - 32;
                for(j=1;j<=a;j++)
                putchar('!');
           }else
           if (mapa[i] % 2 == 1){
                   a = a - 31;
                for(j=1;j<=a;j++)
                  putchar(' ');
           }
        } 
}