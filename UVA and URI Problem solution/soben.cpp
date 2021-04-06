#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        int len=strlen(str);
    for(int j=0;j<=len-1;j++)
    {
        if(str[j]=='L')
            str[j]=str[j-1];
        if(str[j]=='R')
            str[j]=str[j+1];
        cout<<str[j];
    }
    cout<<endl;

    }
    return 0;
}

