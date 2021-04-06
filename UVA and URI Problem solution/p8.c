
#include<stdio.h>
#include<conio.h>

int main()
{
    int n,sum=0,d;
    /*clrscr();*/
    printf("enter the integer number\n");
    scanf("%d",&n);
    {
    d=n%10;
    sum=sum+d;}
    n=n/10;
    printf("the sum individiul digit of the number\n");
    getch();
    return 0;


}
