#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int>v;
    int n,a,B=0,C=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>0)
            B=B+v[i];
        if(v[i]<=0)
            C=C+v[i];
    }
    int r=B-C;
    cout<<r<<endl;

}
