#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    vector<int>v,v1;
    map<int,int>m;
    int t=0;
    while(getline(cin,str)&&(getline(cin,str1)))
    {


       int a,b;
       stringstream ss,ss1;
       ss<<str;
       ss1<<str1;

       while(ss>>a)
       {
           v.push_back(a);
       }
       while(ss1>>b)
       {
           v1.push_back(b);
       }

       if(v.size()>=v1.size())
       {
           for(int i=0;i<v.size();i++)
              m[v[i]]=v[i];

       // for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
         //   cout<<it->first<<endl;

            int d=0;
            for(int j=0;j<v1.size();j++)
            if(m.count(v1[j])>0)
                d++;

              if(d==v1.size()&&d==v.size())
              printf(" A equals B\n");
              else if(d==v1.size()&&d!=v.size())
                printf("B is a proper subset of A\n");
              else if(d==0)
                printf("A and B are disjoint\n");
              else if(d>0&&d!=v1.size())
                printf("I'm confused!\n");
                m.clear();
                v.clear();
                v1.clear();

       }
    else if(v.size()<v1.size())
    {
        for(int i=0;i<v1.size();i++)
            m[v1[i]]=v1[i];

           // for(map<int,int>::iterator it=m.begin();it!=m.end();++it)
             //   cout<<it->first<<endl;

            int d=0;
            for(int j=0;j<v.size();j++)
                if(m.count(v[j])>0)
                d++;
            //if(d==v.size()&&d==v1.size())
            //printf(" A equals B\n");
             if(d==v.size()&&d!=v1.size())
            printf("A is a proper subset of B\n");
            else if(d==0)
             printf("A and B are disjoint\n");
            else if(d>0&&d!=v.size())
            printf("I'm confused!\n");
            v.clear();
            v1.clear();
            m.clear();

    }
    }

}
