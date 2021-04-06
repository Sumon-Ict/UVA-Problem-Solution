#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        cin>>a>>b;
    if(a>b)
    {
     long int sum=0;
        for(int i=b;i<=a;i++)
        if(i%2==1)
        {
            sum+=i;
        }
        //cout<<sum<<endl;
        printf("Case %d: %ld\n",j,sum);

    }
    else
    {
        long int sum=0;
        for(int i=a;i<=b;i++)
            if(i%2==1)
        {
            sum+=i;
        }
        //cout<<sum<<endl;
        printf("Case %d: %ld\n",j,sum);
    }
    }
}
