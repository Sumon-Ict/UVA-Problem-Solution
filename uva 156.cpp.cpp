#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    vector<string>myv;

    map<string,int>m;
    map<string,string>mymap;

    while(getline(cin,str))
    {
        if(str.compare("#")==0)break;

        else
        {
            stringstream  ss(str);
            string s;
            while(ss>>s)
            {
               string str1=s;

               transform(s.begin(),s.end(),s.begin(),::tolower);
               sort(s.begin(),s.end());

               mymap.insert(make_pair(s,str1));

               m[s]++;
                //v.push_back(s);
            }


        }
    }
    for(map<string,int>::iterator it=m.begin();it!=m.end();++it)
        if(m[it->first]==1)
        {
           // v.push_back(mymap[it->first]);
            //cout<<mymap[it->first]<<endl;
            string s1=mymap[it->first];
            myv.push_back(s1);
           // cout<<s1<<endl;
        }
        sort(myv.begin(),myv.end());

        for(int i=0;i<myv.size();i++)
            cout<<myv[i]<<endl;
        myv.clear();
        m.clear();
        mymap.clear();

       // cout<<it->first<<"=" <<it->second<<endl;

      //  for(map<string,string>::iterator it=mymap.begin();it!=mymap.end();++it)
        //    cout<<it->first<<"="<<it->second<<endl;

   // for(int i=0;i<v.size();i++)
     //   cout<<v[i]<<endl;
}
