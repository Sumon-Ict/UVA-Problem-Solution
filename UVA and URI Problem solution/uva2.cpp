#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,l,w,h;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>w>>h;
        if(l<=20&&w<=20&&h<=20)
            printf("Case %d: good\n",i+1);
        else
            printf("Case %d: bad\n",i+1);
    }
    return 0;
}
