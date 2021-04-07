#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<char,char>m;

    m['A']='2'; m['B']='2', m['C']='2', m['D']='3', m['E']='3', m['F']='3', m['G']='4', m['H']='4',
     m['I']='4', m['J']='5', m['K']='5', m['L']='5', m['M']='6', m['N']='6', m['O']='6', m['P']='7',
      m['R']='7', m['S']='7', m['T']='8', m['U']='8', m['V']='8', m['W']='9', m['X']='9', m['Y']='9',

    m['0']='0',m['1']='1',m['2']='2',m['3']='3',m['4']='4',m['5']='5',m['6']='6',m['7']='7',m['8']='8',
    m['9']='9';


    int testcase,n;
    string str;
    scanf("%d",&testcase);

    while(testcase--)
    {

        getchar();
        scanf("%d",&n);
        vector<string>v;
        set<string>s;
        string str1;

        while(n--)
        {
            cin>>str;
            for(int i=0;i<str.size();i++)
                if(m.count(str[i])>0)
            {
                str1+=m[str[i]];
            }
            sort(str1.begin(),str1.end());

            v.push_back(str1);
            s.insert(str1);
            str1.clear();

        }
       // for(int i=0;i<v.size();i++)
         //   cout<<v[i]<<endl;
         for(set<string>::iterator it=s.begin();it!=s.end();++it)
          cout<<*it<<endl;
        cout<<endl;
    }


}
