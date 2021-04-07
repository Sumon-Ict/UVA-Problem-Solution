#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,char>m;
    map<char,char>::iterator it;
    m['A']='2'; m['B']='2', m['C']='2', m['D']='3', m['E']='3',m['0']='0';

    string str,str1;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(m.count(str[i])>0)
        {
            str1+=m[str[i]];
        }
    }
    cout<<str1;


}
