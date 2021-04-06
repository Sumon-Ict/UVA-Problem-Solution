#include<stdio.h>
int main()
{
    int f,f1=0,f2=1,i,j=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("%d ",j);
        else
           {
            f=f1+f2;
            printf("%d  ",f);
            f2=f1;
            f1=f;}

    }
}
