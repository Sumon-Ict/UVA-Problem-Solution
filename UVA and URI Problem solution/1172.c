#include<stdio.h>
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]<0)
            a[i]==1;
            else
                a[i]==a[i];
            printf("%d\n",a[i]);
    }

}
