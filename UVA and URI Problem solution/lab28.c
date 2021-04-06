#include<stdio.h>
int main()
{
    int n;
    printf("enter the year\n");
    scanf("%d",&n);
    if((n%100==0&&n%4!=0)||(n%400==0))
        printf("the input year %d is leap year\n",n);
    else
        printf("the input year %d is not lear year\n",n);

}
