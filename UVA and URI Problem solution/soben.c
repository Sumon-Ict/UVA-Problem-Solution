#include<stdio.h>
int main()
{
    int i,j,n,a[5],max,min;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d",&a[j]);
        max=a[0];
        for(j=1;j<5;j++)
        {
            if(a[j]>max)
            max=a[j];

        }

        min=a[0];
        for(j=1;j<5;j++)
        {
            if(a[j]<min)
                min=a[j];
        }
            printf("%d %d\n",max,min);
    }
return 0;
}

