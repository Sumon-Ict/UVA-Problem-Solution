#include<bits/stdc++.h>
#define N 100002
using namespace std;
bool prime[N];
vector<int>primes;

void result()
{
    memset(prime,true,sizeof(prime));

    int limit=sqrt(N)+1;
    for(int i=2;i<=limit;i++)
        if(prime[i])
    {
        for(int j=i*2;j<=N;j=j+i)
        prime[j]=false;
    }
    for(int i=2;i<=N;i++)
    if(prime[i])
    primes.push_back(i);

}

int finalresult(long int L,long int U)
{

   result();
   int d=0;
    bool isprime[U-L+1];

    memset(isprime,true,sizeof(isprime));

    for(long int i=0;primes[i]*primes[i]<=U;i++)
    {
        int currentprime=primes[i];

        long int base=(L/currentprime)*currentprime;

        if(base<L)
            base=base+currentprime;
        for(long int j=base;j<=U;j=j+currentprime)
        isprime[j-L]=false;
        if(base==currentprime)
            isprime[base]=false;
    }
    for(int i=0;i<=U-L;i++)
        if(isprime[i])
        d++;

  return d;
}
int main()
{
    result();

    int T;
    scanf("%d",&T);
    long int L,U;

    for(int i=1;i<=T;i++)
    {
        scanf("%ld %ld",&L,&U);

        int R=finalresult(L,U);

        printf("Case %d: %d\n",i,R);

    }



}
