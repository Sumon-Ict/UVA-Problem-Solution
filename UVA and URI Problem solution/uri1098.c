#include<stdio.h>
int main()
{
    float i;
    int j;
    for(i=0;i<=2.1;i=i+0.2)
    {
       int d=1;
       {
        for(j=1;j<=3;j++)
           {
              if(i==0.0||i==1.0||i>=2.0)
              {
            printf("I=%.0f J=%.0f\n",i,d+i);
               d++;
              }
              else
              {
                printf("I=%.1f J=%.1f\n",i,d+i);
               d++;
              }
           }
        }
    }
        return 0;
}
