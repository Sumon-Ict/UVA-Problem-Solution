#include<stdio.h>
int main()
{
    int i,j,n,d=0;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the prime number 1 to %d number\n",n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%3d",i);

    }

}
