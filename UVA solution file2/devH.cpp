#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int d=0;

    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='A'&&str[i+1]=='B'||str[i]=='B'&&str[i+1]=='A')
        {
            d++;
            i=i+2;
        }
    }
    if(d==2)
        printf("YES\n");
    else
        printf("NO\n");

}
