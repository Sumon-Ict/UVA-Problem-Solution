#include<stdio.h>
int add(float x,float y)
{
  int  z;
  z=x+y;
  return z;

}
int main()
{
    float a,b;
    int c;
    printf("enter the value of a,b\n");
    scanf("%f%f",&a,&b);
    c=add(a,b);
    printf("the sum of the integer %d",c);

}

