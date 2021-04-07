#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    while(scanf("%d",&n))
    {
        vector<int>v,v1;

        if(n==1)
          printf("Not jolly\n");

        else

        {
            int a,c;

         cin>>a;
         int d=a;
         cout<<d<<endl;

         for(int i=0;i<n-1;i++)
         {
            cin>>c;
            int r=abs(d-c);
            d=c;
            v.push_back(r);
         }
         for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
         sort(v.begin(),v.end());
         for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
         int min=v[0];
         int max=v[v.size()-1];
         if(min>0&&max<n)
          printf("Jolly\n");

         else
            printf("Not jolly\n");
            v.clear();
        }

}
}
