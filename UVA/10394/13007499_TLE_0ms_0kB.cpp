#include<bits/stdc++.h>
#define N  20000002
//#define N  100
using namespace std;
bool prime[N];
vector<int>v;
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
    //v.push_back(2);
    for(int i=3;i<N;i=i+2)
        if(prime[i])
        v.push_back(i);
}
int main()
{
   result();
   int n;
   while(scanf("%d",&n)!=EOF)
   {
       int r=0;
       for(int i=0;i<v.size();i++)
       {
           //if((v[i]-v[i-1])==2)
           int d=abs(v[i]-v[i+1]);
           if(d==2)
             r++;
           if(r==n)
           {
               printf("(%d, %d)\n",v[i],v[i+1]);
               break;
           }
       }
   }
    //result();
    //for(int i=0;i<v.size();i++)
      //  cout<<v[i]<<" ";

}
