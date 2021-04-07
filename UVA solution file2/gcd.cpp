#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd(ll a,ll b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);

}
ll lcm(ll a,ll b)
{
    ll r=a*b;
    return(ll)(r/gcd(a,b));

}
int main()
{
   int testcase;
   scanf("%d",&testcase);
   for(int i=1;i<=testcase;i++)
   {
    ll a,b;
    ll L;

    scanf("%lld%lld",&a,&b);
    scanf("%lld",&L);

    ll result=lcm(a,b);

    ll c=(ll)L/result;
    if(L==c*result)
    {
        ll res=lcm(result,c);
        ll d=L/res;
        ll r=c*d;
        printf("Case %d: %lld\n",i,r);

    }
    else if(L!=c*result)
        printf("Case %d: impossible\n",i);

   }

}
