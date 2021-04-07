#include<bits/stdc++.h>
typedef unsigned long int ll;
ll sod[2000002];
using namespace std;

int relativecoprime(int n)
{
    int  result=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
        while(n%i==0)
        n=n/i;
        result-=result/i;
        }
    }
    if(n>1)
        result-=result/n;
    return result;

}
int depthphi(int n)
{
    int d=1;
    int r=relativecoprime(n);
    while(r!=1)
    {
        r=relativecoprime(r);
        d++;
    }
    return d;

}
void result()
{
    sod[1]=0;
    for(int i=2;i<2000001;i++)
    {
        int v1=depthphi(i);
        ll v2=sod[i-1];
        ll v=v1+v2;
        sod[i]=v;
    }
}
int main()
{
    //result();

    int r=relativecoprime(10);
    int k=depthphi(10);
    cout<<r<<endl;
    cout<<k<<endl;
    int testcase;
    int a,b;

    scanf("%d",&testcase);

    while(testcase--)
    {
        scanf("%d%d",&a,&b);
        ll c=sod[a-1];
        ll d=sod[b];
        ll sum=d-c;
     cout<<sum<<endl;
    }


}

