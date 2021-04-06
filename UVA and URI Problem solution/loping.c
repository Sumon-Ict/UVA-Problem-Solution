#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("enter the number value of n\n");
    scanf("%d",&n);
    printf("1+(1+2)+(1+2+3)........(1+2+3+%d)\n",n);


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            sum=sum+j;
    }
    printf("the sum of the series %d\n",sum);



}
