#include<bits/stdc++.h>
using namespace std;
int val(char c)
{
    if(c>='0'&&c<='9')
        return (int)c-'0';
    else
        return (int)c-'A'+10;

}
int todecimal(string str,int base)
{
    int len=str.size();
    int power=1;
    int num=0;

    for(int i=len-1;i>=0;i--)
    {
        num+=val(str[i])*power;
        power=power*base;
    }
    return num;

}
int main()
{

     string str;
     int b;

     cin>>str>>b;

     int r=todecimal(str,b);
     cout<<r;

}
