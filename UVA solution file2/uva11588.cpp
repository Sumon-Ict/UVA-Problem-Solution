#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str,str1;
    int X,R,C,M,N,d=0;
    scanf("%d",&X);
    vector<int>v;
    set<char>s;
    map<char,int>m;

    while(X--)
    {
      cin>>R>>C>>M>>N;
          getchar();
          for(int i=0;i<R;i++)
          {
              cin>>str;
              str1+=str;
          }
          for(int i=0;i<str1.size();i++)
          {
              m[str1[i]]++;
              s.insert(str1[i]);

          }
          for(set<char>::iterator it=s.begin();it!=s.end();++it)
          {
              int r=m[*it];
              v.push_back(r);

          }
          sort(v.begin(),v.end());

          int max=v[v.size()-1];
          int t=1;
          for(int i=0;i<v.size()-1;i++)
            if(v[i]==max)
          {
              t=t+1;;
          }

          int b1=t*max*M;
          int b2=(str1.size()-max*t)*N;
          int totalb=b1+b2;

          printf("Case %d: %d\n",++d,totalb);
          v.clear();
          m.clear();
          s.clear();
          str1.clear();

    }
}
