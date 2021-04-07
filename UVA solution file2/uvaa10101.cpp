#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

    ll n;
    int t=0;
    while(scanf("%lld",&n)!=EOF)
    {
        int d1=0;
        int d2=0;
        int d3=0;
        int d4=0;

                printf("%4d.",++t);
                if(n==0)
                {
                    printf(" 0\n");
                    continue;
                }

        ll k=n/10000000;
        if(k)
        {
            d1=1;
            n=n-k*10000000;
        }
        ll L=n/100000;
        if(L)
        {
            d2=1;
            n=n-L*100000;
        }
        ll h=n/1000;
        if(h)
        {
            d3=1;
            n=n-h*1000;
        }
        ll s=n/100;
        if(s)
        {
            d4=1;
            n=n-s*100;
        }
       // printf("%4d.",++t);
        if(d1==1)
        {
          int m=k;
          int k1=m/10000000;
          if(k1)
          {
              printf(" %d kuti",k1);
              m=m-k1*10000000;
          }
          int L1=m/100000;
          if(L1)
          {
              printf(" %d lakh",L1);
              m=m-L1*100000;
          }
          int h1=m/1000;
          if(h1)
          {
              printf(" %d hajar",h1);
              m=m-h1*1000;
          }
          int s1=m/100;
          if(s1)
          {
              printf(" %d shata",s1);
              m=m-s1*100;
          }
          if(m)
            printf(" %d",m);
            printf(" kuti");
        }
       // printf(" %ld ",k);

        if(d2==1)
            printf(" %lld lakh",L);

         if(d3==1)
                printf(" %lld hajar",h);
         if(d4==1)
         printf(" %lld shata",s);
         if(n)
        printf(" %lld",n);
        printf("\n");

    }
}
