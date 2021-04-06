#include<iostream>
using namespace std;
int value(long long int m)
{
    int d=0;
    for(int i=1;i<=m;i++)
        if((i%400==0)||((i%4==0)&&(i%100!=0)))
        d++;
    return(d);
}
int main()
{
    long int y,m,d,y1,m1,d1,t,t1;
    int n,result;
    cin>>y>>m>>d;
    if(m<=5)
    {
        t=y*365+m*31+d+value(y);
    }
    if(m>=6)
    {
            t=y*365+5*31+30*(m-5)+d+value(y);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>y1>>m1>>d1;
        if(m1<=5)
             t1=y1*365+m1*31+d1;
        if(m1>=6)
        {

            t1=y1*365+5*31+30*(m1-5)+d1+value(y1);
        }

        result=t-t1;
        cout<<result<<endl;


    }
}
