#include<bits/stdc++.h>
using namespace std;
int res(string str,string str1,int m,int n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;

                else if(str[i-1]==str1[j-1])
                    dp[i][j]=dp[i-1][j-1];

                else dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);


        }
    }
    return dp[m][n];

}
int main()
{
    string s,s1;
    int a,b;
    cin>>s>>s1;
    a=s.size();
    b=s1.size();
    int result=res(s,s1,a,b);
    cout<<result<<endl;
}
