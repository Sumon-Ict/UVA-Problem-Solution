#include<stdio.h>
int main()
{
    int i,n,d,a,j;
    float average;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        float  sum=0;
        scanf("%d",&d);
        for(j=0;j<d;j++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        average=sum/d;
        printf("%.2f\n",average);

    }
    return 0;
}
