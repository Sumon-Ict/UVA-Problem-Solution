#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
   char str[10];
   char str1[]="*";
   char str2[]="Hajj";
   char str3[]="Umrah";
   int i=1;
       while(1)
       {
           cin>>str;
           if(strcmp(str,str1)==0)
            break;
           if(strcmp(str,str2)==0)
           {
            printf("Case %d: Hajj-e-Akbar\n",i);
            i++;
           }
           if(strcmp(str,str3)==0)
           {
            printf("Case %d: Hajj-e-Asghar\n",i);
            i++;
           }

       }
   }

