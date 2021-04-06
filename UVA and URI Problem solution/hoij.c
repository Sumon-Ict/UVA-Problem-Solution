#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char str[1000];
    printf("enter the string \n");
    scanf("%s",str);
    len=strlen(str);
    printf("the reverse order of the string\n");

    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);

    }
}
