#include<bits/stdc++.h>
#define M 1000003
using namespace std;

typedef long int ll;

ll pow(ll n,ll r,ll p)
{
    ll res=1;
    n=n%p;

    while(r>0)
    {
        if(r&1)
            res=(res*n)%p;
            r=r>>1;
            n=(n*n)%p;
    }
    return res;


}

ll modinverse(ll n,ll p)
{
    return pow(n,p-2,p);

}

ll ncrmodp(ll n,ll r,ll p)
{
    if(r==0)
        return 1;
    ll fac[n+1];
    fac[0]=1;

    for(int i=1;i<=n;i++)
    {
        fac[i]=fac[i-1]*i%p;
    }
    return (fac[n]*modinverse(fac[r],p)%p*modinverse(fac[n-r],p)%p)%p;

}


int main()
{
   int t;
   scanf("%d",&t);
   ll n,k;
   for(int i=1;i<=t;i++)
   {
       cin>>n>>k;

       ll res=ncrmodp(n,k,M);
       printf("Case %d: %lld\n",i,res);

   }
}
