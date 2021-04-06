#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char ch;
    char a[2000];
    printf("enter a string \n");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        while(a[i]=='n')
        {

         printf("the first  position of the character %d\n",i+1);
         break;
         }

    }
}
