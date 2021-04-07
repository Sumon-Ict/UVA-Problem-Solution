#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>p;
vector<pair<int,int> >v[2000];
int dis[2000];

void dijkstra(int src)
{
  priority_queue<p,vector<p>,greater<p> >mn;

  dis[src]=0;

  mn.push(make_pair(0,src));

  while(!mn.empty())
  {
      int u=mn.top().second;
      mn.pop();

      for(int i=0;i<v[u].size();i++)
      {
          int node=v[u][i].first;
          int weigh=v[u][i].second;

          if(dis[u]+weigh<dis[node])
          {
              dis[node]=dis[u]+weigh;

              mn.push(make_pair(dis[node],node));

          }
      }
  }
}

int main()
{
    int node,edge;
    scanf("%d %d",&node,&edge);

    int n1,n2,we;

    for(int i=0;i<node+2;i++)
        dis[i]=2e9;

        for(int j=0;j<edge;j++)
        {

            scanf("%d %d %d",&n1,&n2,&we);

            v[n1].push_back( make_pair(n2,we));
            v[n2].push_back(make_pair(n1,we));
        }

        int source,des;

        scanf("%d %d",&source,&des);

        dijkstra(source);

        int result=dis[des];
        cout<<result;







}

