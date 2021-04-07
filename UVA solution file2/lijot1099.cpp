#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>p;
vector<pair<int,int> >v[20002];
int dis[20002];
//int vis[5003]
void  dijkstra(int src)
{
    //memset(vis,false,sizeof(vis));
   // multiset<pair<int,int> >s;
    priority_queue<p,vector<p>,greater<p> >mn;

   // for(int i=0;i<5003;i++)
     //   dis[i]=2e9;

        mn.push(make_pair(0,src));

   // s.insert({0,1});
    dis[src]=0;

    while(!mn.empty())
    {
       // multiset<pair<int,int> >::iterator it=s.begin();

      int node=mn.top().second;
      mn.pop();


        for(int i= 0;i<v[node].size();i++)
        {
            int n=v[node][i].first;
            int we=v[node][i].second;
            if(dis[node]+we<dis[n])
            {
                dis[n]=dis[node]+we;

                mn.push(make_pair(dis[n],n));
        }
    }
   // vis[node]=true;
}
}

int main()
{

int test;
scanf("%d",&test);

for(int t=1;t<=test;t++)
{

  int node, edge;
  int a,b,w;
      scanf("%d %d",&node,&edge);

      int src,des;
      scanf("%d %d",&src,&des);


      dis[node+2];
     // vis[node+2];

      for(int i=0;i<node+2;i++)
        dis[i]=2e9;

    for(int j=0;j<edge;j++)
    {
        scanf("%d %d %d",&a,&b,&w);

        v[a].push_back({b,w});
        v[b].push_back({a,w});

    }
    dijkstra(src);

    //for(int i=1;i<=node;i++)

      //  printf("the distance from the node 1 to %d is = %d\n",i,dis[i]);


int result=dis[des];
if(result==2e9)

    printf("Case #%d: unreachable\n",t);
else
    printf("Case #%d: %d\n",t,result);

    for(int i=0;i<20001;i++)
        v[i].clear();
        dis[20002]={0};

}

  }


