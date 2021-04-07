#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v,v1,v2;

    int n,d=0;
    while(scanf("%d",&n))
    {
        if(n<0)break;
        else
        {
            int a,b;
            for(int i=0;i<12;i++)
            {
                scanf("%d",&a);
                v.push_back(a);
            }
            for(int i=0;i<12;i++)
            {
                scanf("%d",&b);
                v1.push_back(b);
            }

          int  a1=v[0]+n;
            v2.push_back(a1);
           int  a2=v[0]+n+v[1];
            v2.push_back(a2);
            for(int i=2;i<12;i++)
            {
                int a3=v[i]+v[i-1]+v[i-2];
                v2.push_back(a3);
            }
           // for(int i=0;i<12;i++)
            //cout<<v[i]<<endl;
            //for(int i=0;i<12;i++)
              //  cout<<v2[i]<<" ";
              printf("Case %d:\n",++d);


              for(int i=0;i<12;i++)
              {
                  if(v1[i]<=v2[i])
                    printf("No problem! :D\n");
                  else
                    printf("No problem. :(\n");

              }



v.clear();
v1.clear();
v2.clear();
        }
    }
}
