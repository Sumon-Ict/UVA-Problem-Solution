#include<stdio.h>
int main()
{
    int n,i,a,d=0,p=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a>0)
        {
            d++;
        }
        else if(a<0)
            p++;
    }
    printf("%d %d",d,p);
    return 0;
}
