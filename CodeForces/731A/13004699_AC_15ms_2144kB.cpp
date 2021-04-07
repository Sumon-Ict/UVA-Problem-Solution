#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n=97,sum=0;
  string str;
  cin>>str;
  for(int i=0;i<str.size();i++)
  {
      int r=int(str[i]);
      int r1=abs(n-r);
      if(r1>13)
        r1=26-r1;
        sum+=r1;
        n=r;
  }
  cout<<sum<<endl;
}
