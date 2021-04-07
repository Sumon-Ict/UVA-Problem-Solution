#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int dis[n+2];

        vector<int>v[2*n+2];

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&dis[i]);
        }

        int r,source,des;

        scanf("%d",&r);
        for(int j=0;j<r;j++)
        {
            scanf("%d%d",&source,&des);
            v[j].push_back(source);
            v[j].push_back(des);
        }
       // dis[1]=0;

        for(int i=1;i<=n;i++)
        printf(" distance from 1 to %d  is =%d\n",i,dis[i]);

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(dis[v[j][0]]<dis[v[j][1]])
                    dis[v[j][1]]=dis[v[j][0]];
            }
        }

        for(int i=1;i<=n;i++)

        printf(" distance from 1 to %d  is =%d\n",i,dis[i]);



    }
}
