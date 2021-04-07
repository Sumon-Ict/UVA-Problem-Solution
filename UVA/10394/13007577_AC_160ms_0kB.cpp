#include<bits/stdc++.h>
#define N  20000002
using namespace std;
bool prime[N];
vector<pair<int,int> >v;
void primecheck()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i])
        {
            for(int j=i*2;j<=N;j+=i)
                prime[j]=false;
        }
    }
}
void result()
{
    primecheck();
    for(int i=3;i<N;i=i+2)
        if(prime[i]&&prime[i+2])
        v.push_back(make_pair(i,i+2));
}
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   result();
   int n;
   pair<int,int>ps;
    while(scanf("%d",&n)!=EOF)
   {
       ps=v[n-1];
       printf("(%d, %d)\n",ps.first,ps.second);
   }
   return 0;
}
