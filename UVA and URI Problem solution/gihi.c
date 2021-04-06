#include<stdio.h>
int main()
{
    int d=0;
    float n,a,sum=0;
    while(1)
    {
      if(d==2)
            break;
        scanf("%f",&n);
        if(n>=0&&n<=10)
        {
            sum+=n;
            d++;
        }

        else
            printf("nota invalida\n");
    }
    a=sum/2;
    printf("media = %.2f\n",a);
}
