#include<stdio.h>
int main()
{
  int d=0,x;
  float p,r,t;
  float sum=0,a,m;
  while(1)
  {
      if(d==2)
        break;
      scanf("%f",&a);
      if(a>=0&&a<=10)
      {
          sum+=a;
          d++;
      }
      else
        printf("nota invalida\n");
  }
  m=sum/2;
  printf("media = %.2f\n",m);
  while(1)
  {
      scanf("%f",&x);
      printf("novo calculo (1-sim 2-nao)\n");
      if(x==2)
        break;
    else if(x<1||x>2)
      {
          printf("novo calculo (1-sim 2-nao)\n");
      }
    else if(x==1)
      {
        scanf("%f%f",&p,&r);
        t=(p+r)/2;
        printf("media = %.2f\n",t);
      }
  }


}
