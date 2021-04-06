#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b;
        int r=a+b;
        printf("Case %d: %d\n",i,r);
    }
}
