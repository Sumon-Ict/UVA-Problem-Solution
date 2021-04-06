#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter the value of number\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("\nthe value of a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);

    }
    for(i=0;i<3;i++)
       {

        for(j=0;j<3;j++)
    {
        printf("%d   ",a[i][j]);

        }
       printf("\n");

    }

}
