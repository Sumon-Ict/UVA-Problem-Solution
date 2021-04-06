#include<stdio.h>
int fibon(int n)
{
    if(n==1||n==0)
        return n;
    else
        return(fibon(n-2)+fibon(n-1));

}
int main()
{
    int i,N;
    printf("enter the fibonacci number \n");
    scanf("%d",&N);
    printf("first %d fibonacci number are   \n",N);
    for(i=1;i<=N;i++)
        printf("%3d",fibon(i));

}

