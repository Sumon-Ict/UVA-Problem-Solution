#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter the value of number\n");
    for(i=0;i<10;i++)
    {
     printf("enter the value of number a[%d]=",i);
     scanf("%d",&a[i]);

    }
    printf("the original form of the first five digit\n");
    for(i=0;i<5;i++)
    printf("\na[%d]=%d",i,a[i]);
    printf("\nthe reverse order of the next five number ");

    for(i=9;i>=5;i--)
        printf("\na[%d]=%d",i,a[i]);




}
