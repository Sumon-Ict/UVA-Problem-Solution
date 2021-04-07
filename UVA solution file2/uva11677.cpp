#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,d;

    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2))
    {
       if(h1==0&&m1==0&&h2==0&&m2==0)break;


        int d1= h1*60+m1;
        int d2=h2*60+m2;

        //cout<<d1<<endl;
        //cout<<d2<<endl;

         d=d2-d1;
        // cout<<d<<endl;
        if(d<0)
        {
           d=d+24*60;
        }

        printf("%d\n",d);




    }
}
