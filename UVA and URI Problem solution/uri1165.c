#include<stdio.h>
int main()
{
    long long int n;
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%lld",&n);
        long long int j,d=0;
        for(j=1;j<=n;j++)
        {
            if(n%j==0)

                d++;
        }

              if(d==2)
                printf("%lld eh primo\n",n);
                else

                    printf("%lld nao eh primo\n",n);
}
}
