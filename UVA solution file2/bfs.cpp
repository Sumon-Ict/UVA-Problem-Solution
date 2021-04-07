#include<bits/stdc++.h>
using namespace std;
/*void bfs(vector<int>adj[n],int s,int node)
{

    vector<bool>used(node);
    vector<int>d(node),p(node);

    queue<int>q;
    q.push(s);
    used[s]=true;
    p[u]=-1;

    while(!q.empty())
    {
        int V=q.front();
        q.pop();

        for(int u : adj[V])
        {

        }
    }

}*/
int main()
{
    int edge,node,n1,n2;
    scanf("%d %d",&edge,&node);

    vector<int>adj[node+1];
    vector<bool>used(node);
    vector<int>d(node),p(node);
    for(int i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);

    }
    int s,m;
    queue<int>q;

    printf("enter the source\n");

    cin>>s;
    d[s]=0;

    used[s]=true;
    p[s]=-1;
    q.push(s);

    while(!q.empty())
    {
        int V=q.front();
        q.pop();

        for(int i=0;i<adj[V].size();i++)
        {
           int u=adj[V][i];
            if(!used[u])
            {
                q.push(u);
                used[u]=true;
                d[u]=d[V]+1;
                p[u]=V;
            }
        }
    }

    printf("enter the destination for bfs\n");

    cin>>m;
    cout<<d[m]<<endl;
}
