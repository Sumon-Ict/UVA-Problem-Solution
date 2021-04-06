#include<stdio.h>
int main()
{
    int i,j,m,n;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
            printf(" ");
        for(m=1;m<=i;m++)
            printf("*");
            for(n=1;n<i;n++)
                printf("*");

        printf("\n");
    }
}
