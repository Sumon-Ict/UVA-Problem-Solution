#include<stdio.h>
int main()
{
    char c;
    printf("enter a string\n");
    while((c=getchar())!='\n')
    {
        putchar(c);
        if(c==' ')
            printf("\n");

    }
}
