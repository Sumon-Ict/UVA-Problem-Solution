#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()

{
    ll n;
    int i=1;

    while(scanf("%lld",&n)==1)
    {
        printf("%d. ",i++);
    ll r1=n/10000000;
    if(r1>0)
    {
      int  k1=r1/10000000;
        if(k1)
        {
            //arr[++i]=k1;
            //v.push_back("kuti");
             printf("%d kuti ",k1);
        }
        r1=r1%10000000;
     int   L1=r1/100000;
        if(L1)
        {
            //arr[++i]=L1;
            //v.push_back("lakh");
             printf("%d lakh ",L1);
        }
         r1=r1%100000;
     int   h1=r1/1000;
        if(h1)
        {
           // arr[++i]=h1;
            //v.push_back("hajar");
             printf("%d hajar ",h1);
        }
        r1=r1%1000;
      int  s1=r1/100;
        if(s1)
        {
            //arr[++i]=s1;
            //v.push_back("shata");
             printf("%d shata ",s1);
        }
        r1=r1%100;
        if(r1)
        {
           // arr[++i]=r1;
            //v.push_back("kuti");
             printf("%d kuti ",r1);
        }

    }
      n=n%10000000;

        int L2=n/100000;
        if(L2)
        {
            //arr[++i]=L2;
            //v.push_back("lakh");
             printf("%d lakh ",L2);
        }
        n=n%100000;
        int h2=n/1000;

        if(h2)
        {
           // arr[++i]=h2;
            //v.push_back("hajar");
             printf("%d hajar ",h2);

        }
        n=n%1000;
        int s2=n/100;

        if(s2)
        {
            //arr[++i]=s2;
            //v.push_back("shata");
             printf("%d shata ",s2);
        }
        n=n%100;
    cout<<n<<endl;
    }

}
