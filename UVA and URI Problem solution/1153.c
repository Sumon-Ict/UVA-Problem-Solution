#include<stdio.h>
int fact(int n)
{
    long long int fa=1;
    int i;
    for(i=1;i<=n;i++)
        fa=fa*i;
    return(fa);
}
int main()
{

long long int result=1;
int a;
scanf("%d",&a);
result=fact(a);
printf("%lld\n",result);
return 0;
}
