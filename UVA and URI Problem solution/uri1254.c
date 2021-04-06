#include<stdio.h>
int main()
{
    int i,d=0,a,sum=0;
    float average;
    for(i=1;  ;i++)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        else
        {
            sum+=a;
            d++;
        }
    }
    average=(float)sum/d;
    printf("%.2f",average);
    return 0;
}
