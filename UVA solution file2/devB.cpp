#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    vector<int>v;
    cin>>str;
    for(int i=0;i<str.size();i=i+2)
    {
        int digit=str[i]-'0';
        v.push_back(digit);

    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        printf("%d",v[i]);
        if(i!=v.size()-1)
        printf("+");
    }

      v.clear();

}
