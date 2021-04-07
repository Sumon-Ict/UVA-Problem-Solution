#include<bits/stdc++.h>
typedef long int ll;
using namespace std;
int result(ll A,ll L)
{
    int d=1;

    while(A!=1)
    {
        //if(A>L)break;

        if(A%2==0)
        {
            A/=2;
            if(A>L)break;
            d++;
            //if(A>L)break;
        }
        if(A%2==1)
        {
            A=A*3+1;
            if(A>L)break;
            d++;
        }
    }
    return d;
}
int main()
{
   ll a,l;
   cin>>a>>l;
   int r=result(a,l);
   cout<<r;
}
