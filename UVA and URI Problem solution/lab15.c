#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("enter the number for checking palidrome\n");
    scanf("%d",&n);
    int m=n;
    do
    {r=n%10;
    sum=sum*10+r;
    n=n/10;
    }while(n!=0);
    if(sum==m)
        printf("the input number is palindrome\n");
    else
        printf("the inpurt number is not palindrome\n");

}
