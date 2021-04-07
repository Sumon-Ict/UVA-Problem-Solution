#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,d=0;
      vector<int>v;
    int t1,t2,F,A,C;
    scanf("%d",&testcase);

    while(testcase--)
    {

        cin>>t1>>t2>>F>>A;
        for(int i=0;i<3;i++)
        {
            cin>>C;
            v.push_back(C);
        }

       /* double r1=(double)t1*20/100;
        cout<<r1<<endl;
        double r2=(double)t2*20/100;
        cout<<r2<<endl;
        double r3=(double)F*30/100;
        cout<<r3<<endl;
        double r4=(double)A*10/100;
        cout<<r4<<endl;

         sort(v.begin(),v.end());
        double r0=(double)(v[1]+v[2])/2;
        cout<<r0<<endl;

        double r=(double)((v[1]+v[2])/2)*20/100;
        cout<<r<<endl;

    double sum=(r+r1+r2+r3+r4);
   cout<<sum<<endl;
    v.clear();*/
     sort(v.begin(),v.end());
        double r0=(double)(v[1]+v[2])/2;

        double sum=(double)(t1+t2+F+A+r0);

        if(sum>=90)
            printf("Case %d: A\n",++d);
        else if(sum>=80&&sum<90)
            printf("Case %d: B\n",++d);
        else if(sum>=70&&sum<80)
            printf("Case %d: C\n",++d);
        else if(sum>=60&&sum<70)
            printf("Case %d: D\n",++d);
        else
            printf("Case %d: F\n",++d);
            v.clear();

    }


}
