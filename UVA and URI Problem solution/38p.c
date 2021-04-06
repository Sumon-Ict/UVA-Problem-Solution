#include<stdio.h>
int main()
{
    int n,rightdigit,sum=0;
    printf("enter the interger number\n");
    scanf("%d",&n);
    do
    {
        rightdigit=n%10;
        printf("%d",rightdigit);
        n=n/10;
        sum=sum+rightdigit;
    }while(n!=0);
    printf("\n");

    printf("the sum of the number digit %d\n",sum);

    return 0;
}
