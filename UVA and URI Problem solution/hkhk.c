#include<stdio.h>
#include<string.h>
int main()
{
   int i=1;
   char str[10];
   char str1[]="*";
   char str2[]="Hajj";
   char str3[]="Umrah";
       while(1)
       {
           scanf("%s",str);
           if(strcmp(str1,str)==0)

           {
        break;
           }
           if(strcmp(str2,str)==0)
           {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
            }
           if(strcmp(str3,str)==0)
           {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
           }

       }
   }



