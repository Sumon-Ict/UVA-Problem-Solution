#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,vector<int> >m;
    map<int,vector<int> >::iterator it;
    int a,b;
    for(int i=0;i<12;i++)
    {
        cin>>a>>b;
        m[a].push_back(b);
        m[b].push_back(a);

    }
    for(it=m.begin();it!=m.end();++it)
    {
        for(int i=0;i<(*it).second.size();i++)
            cout<<(*it).second[i]<<" ";
        cout<<endl;
    }

}
