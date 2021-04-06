#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[1888],b[1888];
    printf("enter a string\n");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(a);
    i=strcmp(b,a);
    if(i==0)
        printf("the string is palidrone");
    else
        printf("the string is not palidrone");




}
