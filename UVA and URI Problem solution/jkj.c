#include<stdio.h>
int main()
{
    int a,n,i,d=0,sum=0;
    scanf("%d",&a);
    mn:
       {
           scanf("%d",&n);
        if(n==0||n<0)
            goto mn;
            }


        for(i=a; ;i++)
        {
            d++;
            sum=sum+i;

        }

            printf("%d",sum);


}
