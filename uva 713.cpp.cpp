#include<bits/stdc++.h>
using namespace std;
string addstring(string str1,string str2)
{
    if(str1.length()>str2.length())
        swap(str1,str2);
        int n1=str1.length();
        int n2=str2.length();
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
    int carry=0;
    string str;
    for(int i=0;i<n1;i++)
    {
        int sum=(str1[i]-'0')+(str2[i]-'0')+carry;
        str.push_back(sum%10+'0');
        carry=sum/10;
    }
    for(int i=n1;i<n2;i++)
    {
        int sum=(str2[i]-'0')+carry;
       str.push_back(sum%10+'0');
        carry=sum/10;
    }
    if(carry>0)
    {
        str.push_back(carry+'0');
    }
    reverse(str.begin(),str.end());
    return str;
}
int main()
{
    string a,b,s;
    int i,n;
    scanf("%d",&n);
    while(n--)
    {
    cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        s=addstring(a,b);

        reverse(s.begin(),s.end());
        while(s[0]=='0')
        {
         s=s.substr(1,s.length()-1);
        }
        for(int i=0;i<s.length();i++)
            cout<<s[i];
        cout<<endl;

    }
}

