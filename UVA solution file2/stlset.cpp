#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;
    set<string>myset;
    vector<string>v;
    scanf("%d",&n);
    while(n--)
    {
        cin>>str;
        v.push_back(str);
        myset.insert(str);
    }
   // for(int i=0;i<v.size();i++)
     //   cout<<v[i]<<endl;
   // for(int j=0;j<myset.size();j++)
     //   cout<<myset[i]<<endl;
    for(set<string>::iterator it=myset.begin();it!=myset.end();++it)
        cout<<*it<<endl;

}
