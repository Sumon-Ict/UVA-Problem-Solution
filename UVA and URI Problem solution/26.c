#include<stdio.h>
int main()
{
    char a,b;
    printf("enter the in any case\n");
    a=getchar();
    if(a>=65&&a<=90)

        b=a+32;

    else if(a>=97&&a<=122)
        b=a-32;
    printf("the another case of the input %c ",b);



}
