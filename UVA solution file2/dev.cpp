#include<bits/stdc++.h>
using namespace std;
vector<int>v,v1;
map<int,int>mymap;
int main()
{
    int N,V,M;

    while(scanf("%d",&N)!=EOF)
    {
        int d=1;
        int res,res1;
    for(int i=0;i<N;i++)
    {
        scanf("%d",&V);
        mymap.insert(make_pair(V,d));
       v.push_back(V);
    }

    scanf("%d",&M);
    getchar();

    for(int i=0;i<v.size();i++)
        if(v[i]<M)
        v1.push_back(v[i]);

int difference=1000000;
    for(int i=0;i<v1.size();i++)
    {
        int g=v1[i];

        if(mymap.count(g)>0 && mymap.count(abs(M-g))>0)
        {
            res=g;
            res1=abs(M-g);
            if(abs(res1-res)<difference)
            difference=abs(res1-res);
            }
        }
        if(res>res1)
        swap(res,res1);

    printf("Peter should buy books whose prices are %d and %d.\n",res,res1);

    printf("\n");

    }
    }
