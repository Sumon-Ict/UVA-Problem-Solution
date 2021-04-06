#include<stdio.h>
int main()
{
    int i,m,n;
    while(1)
    {
        scanf("%d%d",&m,&n);
        int sum=0;
        if(m<=0||n<=0)
            break;
        else
        {
            if(m<n)
            {
                for(i=m;i<=n;i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("Sum=%d\n",sum);
            }
            else
            {
                for(i=n;i<=m;i++)
                {
                    printf("%d ",i);
                    sum+=i;
                }
                printf("Sum=%d\n",sum);
            }
        }

    }
}
