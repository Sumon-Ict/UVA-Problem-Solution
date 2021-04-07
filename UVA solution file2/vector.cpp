#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());
    int min=v[0];
    int max=v[v.size()-1];
    cout<<min<<" "<<max;

}
