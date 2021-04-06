#include<stdio.h>
int main()
{
    int i=0,a,n,j,sum=0;
    scanf("%d",&a);
    mn:
        {
            scanf("%d",&n);
            if(n<=a)
                goto mn;
        }
        for(j=a; ;j++)
            {
                sum=sum+j;
                i++;
                if(sum>n)
                    break;
            }
            printf("%d\n",i);
}
