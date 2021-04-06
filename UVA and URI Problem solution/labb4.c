#include<stdio.h>
int main()
{
    int max,min,a,b;
    printf("enter the two integer number \n");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    printf("the biggest number of the two integers %d\n",max);
    printf("the smallest number of the two integers %d\n",min);

}
