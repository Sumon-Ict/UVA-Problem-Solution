#include<stdio.h>
int main()
{
    int a,b,r,gcd,lcm;
    printf("enter the two integer number \n");
    scanf("%d%d",&a,&b);
    int x=a;
    int y=b;

    do
    {
        r=a%b;
        a=b;
        b=r;
    }while(b!=0);
    gcd=a;
    lcm=(x*y)/gcd;
    printf("the gcd is two integer number gcd(%d,%d)=%d\n",x,y,gcd);
    printf("the lcm is two integer number lcm(%d,%d)=%d\n",x,y,lcm);




}
