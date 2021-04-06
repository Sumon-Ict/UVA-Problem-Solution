#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,a[1000];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
          sum+=a[j];
        }
       float average=(float)sum/n;
        int d=0;
        for(int j=0;j<n;j++)
            if(a[j]>average)
        {
            d++;
        }
        float r=(float)(d*100)/n;
        printf("%.3f%%\n",r);
    }
}
