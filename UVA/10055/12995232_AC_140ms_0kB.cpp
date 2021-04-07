#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
     long long int  a,b,r;
    while(cin>>a>>b)
    {
      if(a<b)
      {
           r=b-a;
          cout<<r<<endl;
      }
      else
      {
           r=a-b;
          cout<<r<<endl;
      }
    }
}
