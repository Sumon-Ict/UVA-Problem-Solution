#include<bits/stdc++.h>
using namespace std;
/*bool prime[102];
void primecheck()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i*i<=102;i++)
        if(prime[i])
    {
        for(int j=i*2;j<=102;j+=i)
            prime[j]=false;
    }
}*/
int main()
{
    int n,m,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    m=n;
    if(n<=1)
        printf("%d\n",n);
    else
    {
    vector<int>v;
    long long int product=1;
    for(int i=9;i>=2;i--)
    {
        while(n%i==0)
        {
            product=product*i;
            v.push_back(i);
            n=n/i;
        }
    }
    if(product==m)
    {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            printf("%d",v[i]);
        printf("\n");
    }
    else
        printf("-1\n");
    }
    }
}
