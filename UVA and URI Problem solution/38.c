#include<stdio.h>
int ars(int n)
{
    int a,b,c,d;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
    d=a*a+b*b+c*c;
    return d;

}
int main()
{
  int m,k;
  printf("enter the  three digit integer number\n");
  scanf("%d",&m);
  k=ars(m);
  if(k==m)
    printf("the number is armstrong ");
  else
    printf("the number is not armstrong ");

    return 0;
}

