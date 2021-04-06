#include<stdio.h>
int main()
{
    int i,result;
    double n;
    float a[12]={100,50,20,10,5,2,1,0.50, 0.25, 0.10, 0.05,0.01};
    scanf("%lf",&n);
    for(i=0;i<12;i++)
    {
        result=n/a[i];
        if(a[i]>=2)
        {
            printf("NOTAS:");
        printf("%d nota(s) de R$ %.2f\n",result,a[i]);
        }
        else
        {
        printf("MOEDAS:");
                printf("%d moeda(s) de R$ %.2f\n",result,a[i]);
        }
        n= n-(result)*a[i];

    }
}
