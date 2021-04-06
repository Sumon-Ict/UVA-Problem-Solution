#include<stdio.h>
int main()
{
    float n,t;
    scanf("%f",&n);
    if(n>=0.00&&n<=2000.00)
        printf("Isento\n");
    if(n>=2000.01&&n<=3000.00)
    {
        n=n-2000;
        t=(n*8)/100;
        printf("R$ %.2f\n",t);
    }
    if(n>=3000.01&&n<=4500.00)
    {
        n=n-2000;
        t=(1000*8)/100+((n-1000)*18)/100;
        printf("R$ %.2f\n",t);

    }
    if(n>=4500.01)
    {
        n=n-2000;
        t=(1000*8)/100+(1500*18)/100+((n-2500)*28)/100;
        printf("R$ %.2f\n",t);
    }
    return 0;
}
