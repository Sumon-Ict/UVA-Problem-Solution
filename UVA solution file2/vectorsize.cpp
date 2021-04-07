#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> >v;
    int a,b;
    v.resize(5);
    for(int i=0;i<6;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);

    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<< " ";
        cout<<endl;
    }

}
