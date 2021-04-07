#include<bits/stdc++.h>
typedef long int ll;
#define N  100000
using namespace std;
vector<int>v;
bool prime[N];
void result()
{
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i*i<=N;i++)
        if(prime[i]==true)
    {
        for(int j=i*2;j<=N;j=j+i)
            prime[j]=false;

    }
  for(int i=2;i<=N;i++)
    {
        if(prime[i]==true)
        v.push_back(i);
    }
}
int fact(int number)
{
  result();
   int i=0,d=0;
    while(number>=v[i])
   {
       if(number%v[i]==0)
       {
          while(number%v[i]==0)
          {
           d++;
           number/=v[i];
          }
       }
       i++;

   }
   return d;
}


int main()
{
    int a,sum=0;
    scanf("%d",&a);
    for(int k=2;k<=a;k++)
    {
        sum=sum+fact(k);
    }
    cout<<sum<<endl;
}
