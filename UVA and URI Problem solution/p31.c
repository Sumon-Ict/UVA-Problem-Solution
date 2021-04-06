#include<stdio.h>
int main()
{
    char c[1000];
    printf("enter a string\n");
    gets(c);
    int i;
    int len=strlen(c);
    for(i=0;i<len;i++){
            printf("%c",c[i]);
            if(c[i]==' ')printf("\n");
        }

}
