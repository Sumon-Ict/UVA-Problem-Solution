#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int>v;
    while(scanf("%d %d",&n,&m)==2)
    {
        int d=0;
        int a;
        v.push_back(n);
        while(n!=1)
        {
            a=n/m;

            if(n!=a*m)
            {
                d=1;
                break;
            }
            else
                v.push_back(a);
            n=a;

        }
        if(d==1)
        printf("Boring!");

        else if(d==0)
        {
            printf("%d",v[0]);
            for(int i=1;i<v.size();i++)
            {
                printf(" %d",v[i]);
            }
        }
        printf("\n");
        v.clear();

    }
}
