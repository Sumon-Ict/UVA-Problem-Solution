#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    int a;
    string b;
    map<int,string>::iterator it;
    for(int i=0;i<7;i++)
    {
        cin>>a>>b;
        m[a].push_back(b);



    }
    for(it=m.begin();it!=m.end();it++)
        cout<<m[*it]<<endl;

}
