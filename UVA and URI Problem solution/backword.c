#include<stdio.h>
#include<math.h>

int main()
{
    double a[100],b[100][100];
    int i,j,n;
    printf("enter the number of value\n");
    scanf("%d",&n);
    printf("AB\n");
    for(i=0;i<n;i++)
       {
        scanf("%lf%lf",&a[i],&b[i][0]);
       }
    for(j=1;j<n;j++)
    {
        for(i=n-1;i>j-1;i--)
            b[i][j]=b[i][j-1]-b[i-1][j-1];

    }
    for(i=0;i<n;i++)
    {
        printf("%.2lf\t",a[i]);
        for(j=0;j<=i;j++)
            printf("%.2lf\t",b[i][j]);
        printf("\n");

    }
}
