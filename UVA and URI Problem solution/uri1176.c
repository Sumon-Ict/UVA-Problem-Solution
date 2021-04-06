#include<stdio.h>
long long int fib(long long int n)
{
    if(n==0||n==1)
        return(n);
    else
        return(fib(n-1)+fib(n-2));
}
int main()
{

    int t,j;
    long long int m,p;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%lld",&m);
        printf("Fib(%lld) = %lld\n",m,fib(m));

    }


}
