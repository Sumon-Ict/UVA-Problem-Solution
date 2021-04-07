#include<bits/stdc++.h>
using namespace std;
int res(string str, string str1,int m,int n)
{
    int dp[m+1][n+1];
    int i,j;
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
            else
                dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);

        }
    }
    return dp[m][n];
}
int main()
{
    int testcase,a;
    string s,s1;
    scanf("%d",&testcase);
    for(int i=0;i<testcase;i++)
    {
      cin>>a;
      getchar();
      getline(cin,s);
      getline(cin,s1);

      cout<<s<<endl;
      cout<<s1<<endl;

    }

}
