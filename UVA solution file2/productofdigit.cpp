#include<bits/stdc++.h>
using namespace std;
int product(int n)
{
    int sum=1,d;
    while(n!=0)
    {
        d=n%10;
        sum*=d;
        n/=10;
    }
    return sum;
}
int findNumber(int l,int r)
{
    //int m=l;
    int n=r;
    stringstream s,s1;
   // s<<m;
    s1<<n;
    //string a=s.str();
    string b=s1.str();
    int ans=r;

    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='0')
            continue;


        string curr=b;
        curr[i]=((curr[i]-'0')-1)+'0';

        for(int j=i+1;j<curr.size();j++)
        {
           curr[j]='9';
        }


        stringstream s(curr);
          int n=0;
        s>>n;
        if(n>=l&&product(ans)<product(n))
            ans=n;

    }
   return ans;
}
int main()
{

int a,b;
scanf("%d%d",&a,&b);
int r=findNumber(a,b);
cout<<r;

}
