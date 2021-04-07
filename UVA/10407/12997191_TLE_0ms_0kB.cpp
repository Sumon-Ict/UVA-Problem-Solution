#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int a,n,r,c;
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        else
            v.push_back(a);
        while(scanf("%d",&n)&&n!=0)
        {
            v.push_back(n);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
            if(v[i]>0)
        {
        r=v[i];
            break;
        }
        for(int i=r;i>=1;i--)
        {
            set<int>s;
            for(int k=0;k<v.size();k++)
            {
                c=v[k]%i;
                if(c<0)
                    c=c+i;
                s.insert(c);
            }
            if(s.size()==1)
            {
                cout<<i<<endl;
                break;
                }
        }
        v.clear();
    }
}
