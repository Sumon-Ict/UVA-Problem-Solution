#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
vector<int>d(100),p(100);
vector<bool>used(100);
queue<int>q;

int n,m;
void bfs(int s)
{
    q.push(s);
    used[s]=true;
    p[s]=-1;

    while(!q.empty())
    {
        int V=q.front();
        q.pop();

        for(int i=0;i<adj[V].size();i++)
        {
            int u=adj[V][i];
            if(!used[u])
            {
                used[u]=true;
                q.push(u);
                d[u]=d[V]+1;
                p[u]=V;

            }
        }
    }
}
int main()
{
    printf("enter the number of node and edge\n");
    cin>>n>>m;
    int n1,n2;
    printf("enter the node of edge\n");
    for(int i=0;i<m;i++)
    {
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);
    }

    bfs(1);


}
