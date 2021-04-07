#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    //vector<int>v;
    map<char,int>m;
    m['B']=1;
    m['F']=1,m['P']=1,m['V']=1;
    m['C']=2,m['G']=2,m['J']=2,m['K']=2,m['Q']=2,m['S']=2,m['X']=2,m['Z']=2;
    m['D']=3,m['T']=3;
    m['L']=4,m['M']=5,m['N']=5,
    m['R']=6; m['A']=7,m['E']=7,m['I']=7,m['O']=7,m['U']=7,m['H']=7,m['W']=7,m['Y']=7;



while(cin>>str)
{

  vector<int>v;
v.push_back(7);

    for(int i=0;i<str.size();i++)
    {
        if(m[str[i]]!=v[v.size()-1])
            v.push_back(m[str[i]]);
    }
    for(int i=0;i<v.size();i++)
        if(v[i]!=7)
        cout<<v[i];
    cout<<endl;

}


}
