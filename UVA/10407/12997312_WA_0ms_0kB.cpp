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
        int d;
        for(int i=2;i<=r;i++)
        {
            set<int>s;
            d=0;
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
                d++;
                break;
                }
        }
        if(d==0)
            printf("1\n");
        v.clear();
    }
}
