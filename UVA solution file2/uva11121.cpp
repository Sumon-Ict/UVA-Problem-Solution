#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;

    while(str[0]!='1')
    {
        str=str.substr(1,str.size()-1);
    }
    cout<<str;
}
