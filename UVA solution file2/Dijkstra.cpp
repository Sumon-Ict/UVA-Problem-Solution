#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>p;

class graph
{
    int V;
    list<pair<int,int> >*adj;

public :
    graph(int V);

    void addEdge(int u,int v,int w);

    void shortestpath(int s);

};

graph::graph(int V)
{

    this->V=V;
    //adj=new list<p>[v];
    adj=new list<pair<int,int> >[V];

}
void graph::addEdge(int u,int v,int w)
{
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
void graph::shortestpath(int src)
{
    priority_queue<p,vector<p>,greater<p> >mn;

    int dis[V]={2000000};

    mn.push(make_pair(0,src));

    while(!mn.empty())
    {
        int node=mn.top().second;
        mn.pop();

        list<pair<int,int> >::iterator it;

        for(it=adj[node].begin();it!=adj[node].end();++it)
        {
            int v=(*it).first;
            int weight=(*it).second;
            if(dis[node]+weight<dis[v])
            {
                dis[v]=dis[node]+weight;
                mn.push(make_pair(dis[v],v));

            }

        }
    }
     printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dis[i]);
   // printf("%d\n",dis[V-1]);
}
int main()
{
int V = 9;
    graph g(V);

    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);

    g.shortestpath(0);

    return 0;

}

