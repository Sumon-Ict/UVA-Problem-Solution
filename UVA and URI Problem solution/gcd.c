#include<stdio.h>
int main()
{
    int a,b,x,y,gcd,lcm,r;
    printf("enter the two interger number \n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;

    do
    {
        r=a%b;

        a=b;
        b=r;
    }
    while(b!=0);
    gcd=a;

    lcm=(x*y)/gcd;

    printf("the gcd of the interger %d\n",a);
    printf("the lcm of the integer %d\n",lcm);




}
