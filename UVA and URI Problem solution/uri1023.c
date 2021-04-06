#include<stdio.h>
#include<math.h>
int main()
{
    int result,i;
    float n,c;
    long int m;
    float a[6]={100,50,20,10,5,2};
    float b[6]={1,0.50,0.25,0.10,0.05,0.01};
    scanf("%f",&n);
    m=(long int)n;
    c=n-m;
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        result=m/a[i];
        printf("%d nota(s) de R$ %.2f\n",result,a[i]);
        m=m-result*a[i];
    }
    printf("MOEDAS:\n");
    for(i=0;i<6;i++)
    {
        result=c/b[i];
        printf("%d moeda(s) de R$ %.2f\n",result,b[i]);
        c=c-result*b[i];
    }
    return 0;
}

