#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>i;j--)
            printf(" ");
        for(j=1;j<=k;j++)

            printf("*");
            k+=2;
        printf("\n");
    }
}
