#include<stdio.h>
int main()
{
    int i,j,n,number=1;
    printf("enter the number of row of the flyd trangle\n");
    scanf("%d",&n);
    printf("the floyd trangle \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%4d",number);
            number++;
        }
        printf("\n");

    }
}
