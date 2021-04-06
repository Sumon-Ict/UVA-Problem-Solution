#include<stdio.h>
int main()
{
    int i,n,sum;
    int f0=0,f1=1;
    printf("enter the number of fibonancii numbers\n");
    scanf("%d",&n);
    printf("the %d fibonanci numbers are \n",n);
    for(i=0;i<n;i++)
    {
        sum=f0+f1;
        printf("%4d",sum);
        f0=f1;
        f1=sum;
    }
}
