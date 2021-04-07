#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

    string str;
    vector<int>v;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='1'||str[i]=='2'||str[i]=='3')
            v.push_back(str[i]-'0');
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)
        {
          char c=v[i]+'0';
            cout<<c<<endl;
            }
        else
            {
                char c=v[i]+'0';
                cout<<c<<"+";}
    }
}
