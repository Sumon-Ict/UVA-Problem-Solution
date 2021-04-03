#include<bits/stdc++.h>
using namespace std;
bool prime[102];
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
}
int main()
{
    primecheck();
    //vector<int>v[100];
    int number,n,m;
   while(scanf("%d",&number)&&number!=0)
   {
       m=number;
       vector<int>v[100];
       for(int i=2;i<=number;i++)
       {
           n=i;
           while(n%2==0)
       {
        v[2].push_back(2);
        n=n/2;
        }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            v[i].push_back(i);
            n=n/i;
        }
    }
    if(n>2)
        v[n].push_back(n);
       }
       printf("%3d! =",m);
       int d=0;
       for(int k=2;k<=m;k++)
        {
            if(prime[k])
            {
                d++;
                if(d==16)
                {
                  printf("\n");
                  printf("      ");
                }
                    printf("%3d",v[k].size());
            }
           }
           printf("\n");
   }
}
