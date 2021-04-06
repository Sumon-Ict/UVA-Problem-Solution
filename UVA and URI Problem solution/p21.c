#include<stdio.h>
int main()
{
    int a,b,big;
    printf("enter the two integer number \n");
    scanf("%d%d",&a,&b);
    big=(a>b)?a:b;
    printf("the biggest number of the two integers %d",big);
}
