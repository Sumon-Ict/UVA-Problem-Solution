#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,total;
    string str;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++)
    {
     getline(cin,str);
       int len=str.size();
       int d=0;
       for(int k=0;k<len;k++)
       {
           if((str[k]==' '||str[k]=='.')&&(str[k+1]>='a'&&str[k+1]<='z'))
            d++;
       }

       total=(d+1)*420;
       cout<<total<<endl;

    }
}
