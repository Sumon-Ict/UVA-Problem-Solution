#include<stdio.h>
int main()
{
    long int a;
    int d,r,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=0;
        scanf("%ld",&a);
        if(a==0)
            printf("%d\n",d+1);
        else
        {
        while(a!=0)
        {
            r=a%10;
            a/=10;
            d++;
        }

        printf("%d\n",d);
        }

    }
    return 0;
}
