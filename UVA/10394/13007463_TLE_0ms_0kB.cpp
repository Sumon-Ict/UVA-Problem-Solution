#include<bits/stdc++.h>
#define N 20000001
using namespace std;
bool prime[N+1];
void makeprime()
{
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=N;i++)
        if(prime[i])
    {
        for(int j=i*2;j<=N;j+=i)
            prime[j]=false;
    }
}
int main()
{
    makeprime();
    int d,r;
    while(scanf("%d",&d)!=EOF)
    {
         r=0;
        for(int i=3;i<N;i+=2)
        {
            if(prime[i]&&prime[i+2])
                {
                    r++;
                }
            if(r==d)
            {
                printf("(%d, %d)\n",i,i+2);
                break;
            }
        }
    }
return 0;
}

