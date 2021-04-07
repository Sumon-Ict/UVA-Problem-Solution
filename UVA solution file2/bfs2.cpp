#include<bits/stdc++.h>
using namespace std;
#define M 10000
#define N 2000
vector<int>v;
set<int>s;
map<int,int>m;
int main()
{
 int a,b;
 while(cin>>a>>b&& a!=0&&b!=0)
 {
     cout<<a<<"  "<<b<<endl;
    m.insert(make_pair(a,b));
 }

 for(map<int,int>::iterator it=m.begin();it!=m.end();++it)

}

