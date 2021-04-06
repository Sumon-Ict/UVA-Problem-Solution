#include<stdio.h>
int main()
{
    int i,j;
    int k=65;
    for(i=0;i<5;i++)
    {
        for(j=4;j>=i;j--)
            printf("  ");
        for(j=65+0;j<=65+i;j++)
        {
            printf("%2c",j);
        }
        for(j=65+i;j>=65;j--)
            printf("%2c",j);

        printf("\n");

    }
}
