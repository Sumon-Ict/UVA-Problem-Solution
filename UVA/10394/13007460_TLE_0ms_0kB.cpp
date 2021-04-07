#include<bits/stdc++.h>
#define N  20000002
using namespace std;
bool prime[N];
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
int main()
{
    primecheck();
    int n,r;
    while(scanf("%d",&n)!=EOF)
    {
         r=0;
        for(int i=3;i<=N;i=i+2)
        {

        if(prime[i]&&prime[i+2])
        {
            r++;
        }
        if(r==n)
        {
         printf("(%d, %d)\n",i,i+2);
            break;
        }
        }

    }
}
