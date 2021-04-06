#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,root1,root2,realpart,imaginary;
    printf("enter coeffient of the equation a ,b,c \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        printf("root1 is =%.2lf\n",root1);
        printf("root2 is =%.2lf\n",root2);

    }
    else if(d==0)
    {
        root1=(-b)/2*a;
        printf("root1=root2=%.2lf\n",root1);

    }
    else if(d<0)
    {
        realpart=-b/2*a;
        imaginary=sqrt(-d)/2*a;
        printf("root1=%.2lf+%.2lfi\n root2=%.2lf-%.2lfi\n",realpart,imaginary,realpart,imaginary);

    }

}
