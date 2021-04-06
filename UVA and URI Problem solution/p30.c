#include<stdio.h>
int main()
{
    char a,ch;
    printf("enter the string\n");
    while((ch=getchar())!='\n')
    {
        if(ch>=65&&ch<=90)
        a=ch+32;
        putchar(a);

    if(ch>=97&&ch<=122)
        a=ch-32;
    putfchar(a);
    else
        putchar(ch);
    }

}
