#include<stdio.h>
#include<string.h>
int main()
{
    char *str="ASHHJ";
    char *str1;
    //printf("enter the string\n");
    //scanf("%[^\n]",str);
    //printf("your string is lower  case\n");
    str1=strdup(str);
    printf("str=%s\n",str);
    printf("str1=%s\n",str1);
    //strlwr(str);
    //puts(str);
    return 0;

}
