#include<stdio.h>
int fact(int n)
{
    int r=1,i;
    for(i=1;i<=n;i++)
        r=r*i;
        return r;
}
int main()
{

int k,m;
printf("enter the integer number\n");
scanf("%d",&m);
k=fact(m);
printf("the factorial of the number %d\n",k);

return 0;
}

