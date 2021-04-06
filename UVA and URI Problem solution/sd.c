#include<stdio.h>
#include<string.h>
int main()
{
    int i=0;
    char str[100],ch;
    printf("enter the string\n");
    while((ch=getchar())!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("%s",str);


}
