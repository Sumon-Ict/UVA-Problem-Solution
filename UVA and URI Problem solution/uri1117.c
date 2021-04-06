#include<stdio.h>
int main()
{
    int i,j;
    float n,m,sum=0;
    for(i=0; ;i++)
    {
        scanf("%f",&n);
        float sum=0;
        int d=0;
        if(n<0||n>10)
            printf("nota invalida\n");
        if(n>=0&&n<=10)
        {
            sum+=n;
            d++;
        }
        if(d==2)
            break;


    }
    m=sum/2;
        printf("media = %.2f\n",m);

}
