#include<bits/stdc++.h>
typedef long long int ll;

using namespace std;

long long int mod(string num,long long int a)
{
    long long int res=0;

    for(int i=0;i<num.length();i++)
    {
        res=(res*10+(num[i]-'0'))%a;
    }
    return res;
}

int main()
{

    int testcase;
    string str;

    long long int n;
    scanf("%d",&testcase);

    for(int i=1;i<=testcase;i++)

    {
        cin>>str>>n;

        if(str[0]=='-')
        {
            str=str.substr(1);
        }

        if(n<0)
            n=abs(n);

          long long  int  result=mod(str,n);

          if(result)
            printf("Case %d: not divisible\n",i);
          else
            printf("Case %d: divisible\n",i);

    }
}
