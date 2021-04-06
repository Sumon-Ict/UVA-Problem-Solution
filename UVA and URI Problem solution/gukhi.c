#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=9;j>i;j--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%3d",i);
        printf("\n");
    }
}
