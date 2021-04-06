#include<stdio.h>
#include<string.h>
int main()
{

    char *str;

    printf("enter the string\n");
    //gets(str);
    scanf("%[^\n]",str);
    l=strlen(str);
    printf("the length of the string %d\n",l);


    return 0;
}
