#include<bits/stdc++.h>
using namespace std;
int main()
{

   int n,t=0;
    while(cin>>n)
    {
       t++;
        string str1;
    map<string,int>mymap;
    vector<string>v;
    int a,b;

    for(int i=0;i<n;i++)
    {
       cin>>str1;
       v.push_back(str1);
       mymap[str1]=0;

    }

    for(int j=0;j<n;j++)
    {
        cin>>str1>>a>>b;

        if(b!=0)
        {
            int r=a/b;
        mymap[str1]-=r*b;

        for(int k=0;k<b;k++)
        {
            cin>>str1;
            mymap[str1]+=r;
        }
        }
    }
    if(t!=1)printf("\n");
    for(int i=0;i<v.size();i++)

        cout<<v[i]<<" "<<mymap[v[i]]<<endl;


    }

}
