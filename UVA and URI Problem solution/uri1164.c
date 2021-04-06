#include<stdio.h>
int main()
{
    long long int n;
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lld",&n);
        long long int j,sum=0;
        for(j=1;j<n;j++)
        {
            if(n%j==0)
                sum+=j;
        }
        if(sum==n)
            printf("%lld eh perfeito\n",n);
        else
            printf("%lld nao eh perfeito\n",n);
       // printf("\n");
    }

}
