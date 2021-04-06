#include<stdio.h>
int main()
{
    int i,n,d,j,m[1000];
    char c;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
         getchar();
        int sum=0;
        for(j=0;j<3;j++)
        {
            scanf("%c",&c);
            d=(int)c;
            sum=sum+d;
        }
        m[i]=sum;
    }
for(i=0;i<n;i++)
    printf("%d\n",m[i]);
        return 0;

}
