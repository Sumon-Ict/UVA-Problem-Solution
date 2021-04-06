#include<stdio.h>
int main()
{
    int x,i,n;
    long long int sum,c=1;
    double m,d;
    scanf("%d%d",&x,&n);
    printf("%d+%d%d+%d%d%d.........=\n",x,x,x,x,x,x);
    for(i=1;i<=n;i++)
    {
        c=c*10;
        }
        m=(double)(10*x*(c-1))/81;
    d=(double)(n*x)/9;
    sum=(m-d);
    printf("the sum %lld\n",sum);


}
