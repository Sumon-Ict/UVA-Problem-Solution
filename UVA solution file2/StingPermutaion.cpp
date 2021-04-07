#include<bits/stdc++.h>
using namespace std;
vector<string>v1;
set<string>myset;
void permute(string str)
{
    sort(str.begin(),str.end());
    do{
        myset.insert(str);

    }while(next_permutation(str.begin(),str.end()));

   for( set<string>::iterator it=myset.begin();it!=myset.end();++it)
   {
       string s2=*it;
    v1.push_back(s2);
   }
   for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<endl;
    myset.clear();
   v1.clear();
}
int main()
{

    int n;
    string str1;
    scanf("%d",&n);
    while(n--)
    {
       cin>>str1;
    permute(str1);
    }


}
