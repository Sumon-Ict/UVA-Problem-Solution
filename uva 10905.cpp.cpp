#include<bits/stdc++.h>
using namespace  std;
int mycompare(string x,string y)
{
    string xy=x.append(y);
    string yx=y.append(x);

    return xy.compare(yx)>0?1:0;
}
int main()
{//string str;
    int n;
  while(scanf("%d",&n))
        {
            if(n==0)break;
                else
                {
                    getchar();
                    string str;
                    vector<string>v;
                    for(int i=0;i<n;i++)
                    {
                        cin>>str;
                        v.push_back(str);
                    }
                    //for(int i=0;i<v.size();i++)
                    //cout<<v[i];
                   sort(v.begin(),v.end(),mycompare);
                   for(int i=0;i<v.size();i++)
                    cout<<v[i];
                   cout<<endl;
                }
        }

}
