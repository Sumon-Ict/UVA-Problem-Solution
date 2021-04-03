#include<bits/stdc++.h>
using namespace std;
vector<int>v;
#define N 10002
bool prime[N];
void primecheck()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i*i<=N;i++)
        if(prime[i])
    {
        for(int j=i*2;j<=N;j+=i)
            prime[j]=false;
    }
}
void result()
{
    primecheck();
    v.push_back(2);
    for(int i=3;i<=N;i=i+2)
        if(prime[i])
        v.push_back(i);
}
int main()
{
  result();
  int n;
  while(scanf("%d",&n)&&n!=0)
  {
      int d=0;
      for(int i=0;v[i]<=n;i++)
      {
         int m=n;
          for(int j=i;j<v.size();j++)
          {
          m=m-v[j];
          if(m==0)
          {
              d++;
              break;
          }
          if(m<0)
            break;
          }
      }
      cout<<d<<endl;
  }
}
