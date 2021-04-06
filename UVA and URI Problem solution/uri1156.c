#include<stdio.h>
int main()
{
    int i,j=1;
    float sum=0;
    for(i=1;i<=39;i=i+2)
    {
        sum+=(float)i/j;
        j=2*j;
    }
    printf("%.2f\n",sum);

}
