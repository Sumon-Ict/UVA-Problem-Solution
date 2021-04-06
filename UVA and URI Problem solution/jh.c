#include<stdio.h>
//int main()
int fact(int n)
{

    int i,x=1;
    for(i=n;i>=1;i--)
        x=x*i;
    return x;}
int main()
{

    int n;
    printf("enter the integer number ");
    scanf("%d",&n);
    int f=fact(n);
    printf("the value 0f %d",f);


}

