#include<stdio.h>

int main()
{
    int i,n,sum=0,a,aver;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a);
    sum+=a;
    }
    aver=sum/n;
    printf("%d",aver);

}
