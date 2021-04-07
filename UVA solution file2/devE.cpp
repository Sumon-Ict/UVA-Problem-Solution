#include<bits/stdc++.h>
typedef long int ll;
using namespace std;
 ll digitc(ll n)
{
     ll divisor=0;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                 divisor++;
        else
            divisor=divisor+2;
        }


    }
    return divisor;

}
int main()
{

    ll n;
    ll  value;
    vector<long int>v;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>value;
        v.push_back(value);


    }
    for(ll j=0;j<v.size();j++)
    {
        ll dc=digitc(v[j]);
        if(dc==3)
            printf("YES\n");
        else
            printf("NO\n");


    }

v.clear();

}
