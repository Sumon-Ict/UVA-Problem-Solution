#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    int a,b;

    for(int i=0;i<5;i++)
    {
        cin>>a>>b;
        m.insert(make_pair(a,b));

    }
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<endl;

}
