
#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
ll relativecoprime(ll n)
{
   ll result=n;
   for(int i=2;i*i<=n;i++)
   {
       if(n%i==0)
       {
           while(n%i==0)
            n=n/i;
           result=result-result/i;
       }
   }
   if(n>1)
    result=result-result/n;
   return result;

}
int main()

{
    ll n;
    while(scanf("%ld",&n)&&n!=0)
    {
        ll r=relativecoprime(n);
        printf("%ld\n",r);
    }
}
