#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int len,d,n;
    char str[105];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        len=strlen(str);
        d=len-1;
        if(str[d]%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;


    }
    return 0;
}
