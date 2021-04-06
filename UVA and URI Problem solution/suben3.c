#include<stdio.h>
int main()
{
    int i,a,n,v,j,m[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       int v=1;
        for(j=1;j<=3;j++)
        {
            scanf("%d",&a);
            v=v*a;
        }
        m[i]=v;
    }
    for(i=1;i<=n;i++)
        printf("%d\n",m[i]);
    return 0;
}
