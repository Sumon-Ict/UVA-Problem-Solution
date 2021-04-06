#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    char ch[100];
    int len,d;
    //scanf("%s",ch);
    gets(ch);
    //cin>>ch;
    len=strlen(ch);
   d=len-1;
    if(ch[d]%2==0)
        cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;


}
