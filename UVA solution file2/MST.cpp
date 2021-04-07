#include<bits/stdc++.h>
using namespace std;
#define max 100005
int id[max],nodes,edges;
pair<long long ,pair<int,int> >p[max];

void inilize()
{
    for(int i=0;i<max;i++)
        id[i]=i;
}
int root(int x)
{
    while(id[x]!=x)
    {
        id[x]=id[id[x]];
        x=id[x];
    }
    return x;
}
void union1(int m, int n)
{
    int p=root(m);
    int q=root(n);
    id[p]=id[q];

}
long long kruskal(pair<long long ,pair<int ,int > >p[])
{
    int x,y;
    long long cost,minimumcost=0;
    for(int i=0;i<edges;i++)
    {
        x=p[i].second.first;
        y=p[i].second.second;
        cost=p[i].first;
        if(root(x)!=root(y))
        {
            minimumcost+=cost;
            union1(x,y);
        }

    }
    return minimumcost;
}



int main()
{
inilize();
int x,y;
long long result,w;
cin>>nodes>>edges;
for(int i=0;i<edges;i++)
{
    cin>>x>>y>>w;
    p[i]=make_pair(w,make_pair(x,y));

}
sort(p,p+edges);
result=kruskal(p);
cout<<result<<endl;

}

