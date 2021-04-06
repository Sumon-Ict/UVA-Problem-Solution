#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the integer number \n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        printf("the input number is perfect\n");
    else
        printf("the input number is not perfect\n");

}
