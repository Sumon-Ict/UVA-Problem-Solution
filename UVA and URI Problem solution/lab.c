#include<stdio.h>
int main()
{
    float s,u,t,a;
    printf("enter the value of velocity \n ");
    scanf("%f",&u);
    printf("enter the value of time\n");
    scanf("%f",&t);

    printf("enter the value of accelation \n");
    scanf("%f",&a);
    s=u*t+(a*t*t)/2;
    printf("the value of the distance %.3f\n",s);

}
