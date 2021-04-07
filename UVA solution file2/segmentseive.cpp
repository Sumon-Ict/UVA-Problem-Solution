#include<bits/stdc++.h>
using namespace std;
#define N 100000
bool prime[N];
vector<int>v;

void result()
{
    memset(prime,true,sizeof(prime));

int limit=sqrt(N)+1;
prime[1]=false;

for(int i=2;i<=limit;i++)
    if(prime[i]==true)
{
    for(int j=i*2;j<N;j=j+i)
        prime[j]=false;
}
  for(int i=2;i<N;i++)
    if(prime[i])
    v.push_back(i);

}

int  printprime(long int L,long int U)
{
   result();
 // int d=0;
 int d=0;
    bool isprime[U-L+1];

    memset(isprime,true,sizeof(isprime));
    for( long int i=0;v[i]*(long int)v[i]<=U;i++)
    {
        int currentPrime=v[i];
        long int base=(L/currentPrime)*currentPrime;
        if(base<L)
            base=base+currentPrime;
        for(long int j=base;j<=U;j=j+currentPrime)
        {
            isprime[j-L]=false;
        }
        if(base==currentPrime)
            isprime[base-L]=true;
    }
    for(long int i=0;i<=U-L;i++)
        if(isprime[i])
            d++;
        return  d;

}

int main()
{

  result();

  int T;
  scanf("%d",&T);
  long int a,b;
  for(int i=1;i<=T;i++)
  {
      scanf("%ld %ld",&a,&b);

      int R=printprime(a,b);

      if(a==1)
        R=R-1;
      printf("Case %d: %d\n",i,R);

  }

}
