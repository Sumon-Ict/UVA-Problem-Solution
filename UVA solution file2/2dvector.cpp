#include<bits/stdc++.h>
using namespace std;
int  main()
{
    //vector<vector<char> >v;
    vector<char>v[12];

    char ch;
    for(int i=0;i<3;i++)
    {
        //v.push_back(vector<char>());
        for(int j=0;j<3;j++)
        {
            cin>>ch;
            v[i].push_back(ch);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<v[j][i]<<" ";
        cout<<endl;
    }

}
