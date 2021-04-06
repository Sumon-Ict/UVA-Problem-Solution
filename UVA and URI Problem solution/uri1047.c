#include<stdio.h>
int main()
{
    int a,n,i,sum=0;
    scanf("%d",&a);
    mn:
        {
            scanf("%d",&n);
            if(n==0||n<0)
                goto mn;

        }
        for(i=1;i<=n;i++)
        {
            sum+=a;
            a++;
        }
        printf("%d\n",sum);
        return 0;
}
