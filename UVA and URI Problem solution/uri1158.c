#include<stdio.h>
int main()
{
    int a,x,y,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d",&x,&y);
       int sum=0;
       int d=0;
        for(j=x; ;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
                d++;
            }
            if(d==y)
                break;
        }
        printf("%d\n",sum);
    }


}
