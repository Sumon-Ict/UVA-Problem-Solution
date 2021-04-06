#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    long long int t1,t2,p;
    int h1,h2,m1,m2,s1,s2,h;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h1>>m1>>s1;
        cin>>h2>>m2>>s2;
        cin>>h;
        t1=h1*3600+m1*60+s1;
        t2=h2*3600+m2*60+s2;
        p=t2-t1;
        if(p>7200)
            p=p-(24*3600);
        else
            p=p;


      int  result=abs(p*h);


        cout<<result<<endl;

    }
    return 0;
}
