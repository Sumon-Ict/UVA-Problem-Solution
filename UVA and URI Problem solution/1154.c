#include<stdio.h>
int main()
{
    float a,average,sum=0;
    int i,d=0;
for(i=1; ;i++)
    {
        scanf("%d",&a);
          sum=sum+a;
        if(a<0)
            break;
       // sum=sum+a;
        d++;

    }
    average=sum/d;
    printf("%.2f\n",average);


}
