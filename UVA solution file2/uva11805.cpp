#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    int n,k,p;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {

        scanf("%d %d %d",&n,&k,&p);

        int r=(k+p)%n;

        if(r==0)
            printf("Case %d: %d\n",i,n);
        else
            printf("Case %d: %d\n",i,r);

    }
}
