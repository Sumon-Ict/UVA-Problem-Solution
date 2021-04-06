#include<stdio.h>
int gcd(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return(a);
}

    int main()
{

        int i,j,n,a[100],g;
        printf("enter the number \n");
        scanf("%d",&n);
        printf("enter the %d value\n",n);
        for(i=0;i<n;i++)
        {
            scanf("%d",a[i]);}
        g=gcd(a[0],a[1]);
        for(j=2;j<n;j++)
        {
            g=gcd(g,a[j]);

        }
        printf("gcd is of the values %d\n",g);





}
