#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2,s1,s2;
    int i,j,k,lenth;
    while(cin>>str1)
    {
        set<string>myset,myset1;
        vector<string>v;
       for(i=0;i<str1.size();i++)
       {
           k=i;
           for(j=i;j<str1.size();j++)
           {

               str2=str1.substr(i,j+1-k);

               v.push_back(str2);
               myset.insert(str2);

           }
       }
       for(int i=0;i<v.size();i++)
       {
           string s1=v[i];
           s2=v[i];
            reverse(s1.begin(),s1.end());
            if(s1.compare(s2)==0)
            myset1.insert(s1);
       }
            int result=myset1.size();
           // cout<<result<<endl;
           // printf("The string '%s' contains %d palindromes.\n",str1,result);
            cout<<"The string "<<"'"<<str1<<"'"<<" contains "<<result<<" palindromes."<<endl;

            //for(set<string>::iterator it=myset1.begin();it!=myset1.end();++it)
              //  cout<<*it<<endl;
    }
}
