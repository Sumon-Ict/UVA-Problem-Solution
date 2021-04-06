#include<stdio.h>
int main()
{
    int i,j,n;
    double a[100],b[100][100];
    printf("enter the number of value \n");
    scanf("%d",&n);
    printf("a   b\n");
    for(i=0;i<n;i++)
        scanf("%lf%lf",&a[i],&b[i][0]);
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
         {

            b[i][j]=b[i+1][j-1]-b[i][j-1];
         }

    }
    for(i=0;i<n;i++)
    {
        printf("%.2lf     ",a[i]);
        for(j=0;j<n-i;j++)
            printf("%.2lf     ",b[i][j]);
        printf("\n");

    }

}

