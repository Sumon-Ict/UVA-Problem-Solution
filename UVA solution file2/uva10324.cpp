#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int testcase=1;
    while(cin>>str)
    {
      if(str.size()==0)break;
       printf("Case %d:\n",testcase++);
        set<char>myset;
        int n,a,b;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {

    scanf("%d%d",&a,&b);
    int  c=min(a,b);
     int j=max(a,b);

     string substring=str.substr(c,j-c+1);
     if(substring.size()<=1||unique(substring.begin(),substring.end())==substring.begin()+1)
        printf("Yes\n");
     else
        printf("No\n");


     /* for(int k=c;k<=j;k++)
        myset.insert(str[k]);

            int r=myset.size();
            if(r==1)
                printf("Yes\n");
            else if(r!=1)
                printf("No\n");
            myset.clear();*/

        }
    }
}
