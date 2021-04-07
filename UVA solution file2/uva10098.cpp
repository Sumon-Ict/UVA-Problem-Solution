#include<bits/stdc++.h>
using namespace std;
void permute(string s)
{
    sort(s.begin(),s.end());

    do{
        cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));

}
int main()
{
  int testcase;
  string str;
  scanf("%d",&testcase);
  while(testcase--)
  {
   cin>>str;

   permute(str);
   cout<<endl;
  }

}
