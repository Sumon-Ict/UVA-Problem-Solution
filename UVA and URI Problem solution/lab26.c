#include<stdio.h>
int main()
{
    int i=0,j,number,m,base,a[1000],r;
    char base16[100]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    printf("enter the number fot converting\n");
    scanf("%d",&number);
    printf("enter the basse for converting\n");
    scanf("%d",&base);
    int k=number;
    while(number!=0)
    {
        r=number%base;
        a[i]=r;
        number/=base;
        i++;
    }
    printf("the converting number %d base for decimal %d\n",base,k);

    for(j=i-1;j>=0;j--)
    {
        m=a[j];
        printf("%c",base16[m]);
    }
}
