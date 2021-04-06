#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[1000],max;
    string  str[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<10;j++)
        {

            cin>>str[j]>>a[j];
        }
        max=a[0];
        for(int j=1;j<10;j++)
        {
            if(a[j]>max)
                max=a[j];
        }
        printf("Case #%d:\n",i+1);
        for(int j=0;j<10;j++)
            if(a[j]==max)
            {
            cout<<str[j]<<endl;
            }

    }
}
