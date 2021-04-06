#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,n,k,a,p;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       p=0;
       for(j=1;j<=10;j++)
       {
           int d=0;
           scanf("%d",&a);
           for(k=1;k<=a;k++)
           {
               if(a%k==0)
                d++;
           }
           if(d==2)
            p++;
       }
       printf("%d\n",p);
   }
   return 0;
}
