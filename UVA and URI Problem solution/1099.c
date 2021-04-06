#include<stdio.h>
int main()
{
    int a,i,j,x,y;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d%d",&x,&y);
        int sum=0;
        if(x<y)
        {
        for(j=x+1;j<y;j++)
        {
            if(j%2!=0)
                sum+=j;
        }
        printf("%d\n",sum);
        }
        else
        {
            for(j=y+1;j<x;j++)
            {
                if(j%2!=0)
                    sum+=j;
            }
            printf("%d\n",sum);
        }
    }
}
