#include<stdio.h>
int main()
{
    int i,n,a[1000];
    long int minimum_value=10000000;
    printf("enter the number of value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        if(minimum_value>a[i])
            minimum_value=a[i];
    }
    printf("minimum_value is %ld\n",minimum_value);



}

