#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string str;
    map<string,string>m;
    //scanf("%d",&n);
    while(cin>>str)
    {
       if(str=="#")break;
        cin>>str;
        string s=str;
       transform(str.begin(),str.end(),str.begin(),::tolower);
       sort(str.begin(),str.end());
      m.insert(make_pair(s,str));

    //   m[s]=str;


    }
    for(map<string,string>::iterator it=m.begin();it!=m.end();++it)
        cout<<it->first<<"="<<it->second<<endl;
}
