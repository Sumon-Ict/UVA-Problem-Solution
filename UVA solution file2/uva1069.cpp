#include<bits/stdc++.h>
#define n 100
using namespace std;
bool prime[n+1];

void  result()
{
    //bool prime[n+1];
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {

        for(int j=2*i;j<=n;j=j+i)
            prime[j]=false;
        }

    }
}
int main()
{

    result();
    vector<int>v;
    for(int i=2;i<n;i++)
        if(prime[i])
    {
        v.push_back(i);

    }
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";

}
