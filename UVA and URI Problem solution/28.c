#include<stdio.h>
int main()
{
    char ch;
    printf("enter the string\n");
    while((ch=getchar())!='\n')
        putchar(ch);
}
