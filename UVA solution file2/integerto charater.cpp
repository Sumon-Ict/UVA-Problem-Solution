#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    map<char,char>m;
    m['a']='b';
    m['v']='c';
    m['\\']=']';

    for(map<char,char>::iterator it=m.begin();it!=m.end();++it)
        cout<<it->first<<"="<<it->second<<endl;
}
