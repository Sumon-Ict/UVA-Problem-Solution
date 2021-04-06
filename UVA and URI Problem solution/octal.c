#include<stdio.h>
int main()
{
    int i=0,j,d,r,octal[100];
    printf("enter the decimal number \n");
    scanf("%d",&d);
    int n=d;
    while(d!=0)
    {
        r=d%8;
        octal[i]=r;
        i++;
        d=d/8;

    }
    printf("the equaliant  octal of the decimal  number %d\n",n);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",octal[j]);

    }

}
