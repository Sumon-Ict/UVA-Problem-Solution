#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    m['a']=1;
    m['b']=2;
    m['c']=3;
    m['d']=1;
    m['e']=2;
    m['f']=3;
    m['g']=1;
    m['h']=2;
    m['i']=3;
    m['j']=1;
    m['k']=2;

    m['l']=3;
    m['m']=1;
    m['n']=2;
    m['o']=3;
    m['p']=1;
    m['q']= 2, m['r']= 3, m['s']= 4,m['t']= 1,m['u']=2;
    m['v']=3, m['w']=1, m['x']=2,m['y']=3,m['z']= 4,m[' ']=1;

    int t;
    string str;
    scanf("%d",&t);
    int d=0;

    getchar();
    while(t--)
    {
        int sum=0;
        getline(cin,str);
        for(int i=0;i<str.size();i++)
        {
            sum+=m[str[i]];
        }

        printf("Case #%d: %d\n",++d,sum);

    }


}
