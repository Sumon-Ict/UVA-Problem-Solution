#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     int a,b;
    while(cin>>a>>b)
    {
        if(a<b)
        {
            int r=b-a;
            cout<<r<<endl;
        }
        else
        {
            int r=a-b;
            cout<<r<<endl;
        }
    }
}
