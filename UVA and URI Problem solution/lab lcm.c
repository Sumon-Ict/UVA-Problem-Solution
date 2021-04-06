#include<stdio.h>
int main()
{
    int r,a,b,x,y,lcm,gcd;
    printf("enter the two integer numbers \n");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    do
    {
        r=a%b;
        a=b;
        b=r;

    }while(b!=0);
    gcd=a;
    lcm=x*y/gcd;
    printf("gcd is %d\n",gcd);
    printf("lcm is %d\n",lcm);

    //printf("")
}
