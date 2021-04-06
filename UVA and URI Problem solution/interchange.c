#include<stdio.h>
//int main()
int interchange(int *x,int *y);
int main()
{
    int a,b;
    printf("enter the two integer numbers a and b\n");
    scanf("%d%d",&a,&b);
    interchange(&a,&b);

}
int interchange(x,y)
int *x,*y;
{


    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("%d=x\n%d=y ",*x,*y);

}
