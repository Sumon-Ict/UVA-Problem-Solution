#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {

        int k,v,M;
        char ch;
        string str;
        map<char,int>m;
        scanf("%d",&k);
        getchar();
        for(int i=0;i<k;i++)
        {
            cin>>ch>>v;
            m[ch]=v;
        }
        long long int sum=0;
        scanf("%d",&M);
        getchar();
       // for(map<char,int>::iterator it=m.begin();it!=m.end();++it)
         //   cout<<it->first<<" "<<it->second<<endl;
        for(int i=0;i<M;i++)
        {
            getline(cin,str);

            for(int j=0;j<str.size();j++)
            {
            if(m.count(str[j])>0)
            {
                sum+=m[str[j]];
            }
            else
                sum+=0;

            }

        }
        double result=(double)sum/100;
        printf("%.2lf$\n",result);
       // cout<<sum<<endl;



    }
}
