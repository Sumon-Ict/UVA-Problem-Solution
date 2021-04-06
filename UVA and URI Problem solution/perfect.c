#include<stdio.h>
int main()
{
    int i,n,r,d=0;
    printf("enter the integer number \n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    r=n%i;
    if(r==0)
    {
        d=d+i;
    }
    }
    if(d==n)
        printf("the number is perfect number");
    else
        printf("the integer is not perfect number\n");



}
