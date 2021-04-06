#include<stdio.h>
int main()
{
    int i,n,a,j,average;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<5;j++)
        {
        scanf("%d",&a);
        sum+=a;
        }
        average=sum/5;
        printf("%d\n",average);
    }
return 0;
}
