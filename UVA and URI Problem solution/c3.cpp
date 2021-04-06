#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=n-1;j>=0;j--)
        cout<<a[j]<<" ";
}
