#include<stdio.h>
int fib(int n)
{
if(n==0||n==1)
    return(n);
else
    return(fib(n-1)+fib(n-2));


}
int main()
{
    int i,a,fa;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    fa=fib(i);
        printf("%d ",fa);
}
