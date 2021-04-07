#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    vector<int>v;
    vector<string>v1;
    map<int,string>m;
    int testcase,d=0;
    scanf("%d",&testcase);
    getchar();
    for(int j=0;j<testcase;j++)
    {
        getchar();

        getline(cin,str);
        stringstream ss(str);
        int n;
        while(ss>>n)
        v.push_back(n);
        getline(cin,str1);
        stringstream s(str1);
        string b;
        while(s>>b)
        {
            v1.push_back(b);
        }


    for(int i=0;i<v.size();i++)
    {
        m.insert(make_pair(v[i],v1[i]));

    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
        cout<<m[v[i]]<<endl;

       if(j!=testcase-1) cout<<endl;

        v.clear();
       v1.clear();
       m.clear();
    }

}
