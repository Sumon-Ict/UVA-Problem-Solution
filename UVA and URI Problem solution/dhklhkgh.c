#include<stdio.h>
int main()
{
    int i,n,m[100];
    long long int a;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int d=0;
        while(c!='\n')
        {
            scanf("%lld",&a);
            d++;

        }
        m[i]=d;
    }
    for(i=0;i<n;i++)
        printf("%d\n",m[i]);
}
