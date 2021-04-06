#include<stdio.h>
int main()
{
    int i,l;
    char a[233];
    printf("entrer a strint\n");
    gets(a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-1-i])
       {
           printf("not a palidrone");
        break; }

    }
   if(a[i]==a[l/2])

        printf("palidrone");

}
