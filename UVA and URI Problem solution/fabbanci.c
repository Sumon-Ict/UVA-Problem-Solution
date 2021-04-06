#include<stdio.h>
int main()
{
    int i,n,f,f1=0,f2=1;
    printf("enter the number of fibonanci number\n");
    scanf("%d",&n);
    printf("the fibonanci numbers are below\n");

    for(i=1;i<=n;i++)
    {
        f=f1+f2;
        printf("%d   ",f);
        f1=f2;
        f2=f;
    }

}
