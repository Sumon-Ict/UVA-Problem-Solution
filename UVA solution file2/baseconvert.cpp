#include<bits/stdc++.h>
using namespace std;
string tostring(int n)
{
    string str;
    stringstream ss;
    ss<<n;
    ss>>str;
    return str;
}
string result(int n,int base)
{

if(n==0)
    return "0";
    string a=" ";


    while(n!=0)
    {
    int r=n%base;
    n/=base;

    if(r<0)
    {
        r+=(-base);
        n+=1;
    }
    a=tostring(r)+a;
    }

    while(a[0]!='1')
    {
        a=a.substr(1,a.size()-1);
    }
    return a;

}
int main()
{
    int n,t;
    scanf("%d",&t);
    int base=-2;
    for(int i=1;i<=t;i++)
    {

    cin>>n;
    string r=result(n,base);

    printf("Case #%d: ",i);
    cout<<r;
   if(i!=t)
    printf("\n");
    }
}
