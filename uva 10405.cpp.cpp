#include<bits/stdc++.h>
using namespace std;
int lcs(string str,string str1,int m,int n)
{
    int res[m+1][n+1];
    int i,j;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
                res[i][j]=0;
            else if(str[i-1]==str1[j-1])
                res[i][j]=res[i-1][j-1]+1;
            else
                res[i][j]=max(res[i-1][j],res[i][j-1]);


        }
    }
    return res[m][n];
}
int main()
{
    string s,s1;
    while(getline(cin,s)&&getline(cin,s1))
    {
        //cout<<s<<endl;
        //cout<<s1<<endl;
        int a=s.size();
        int b=s1.size();
        int result=lcs(s,s1,a,b);
        printf("%d\n",result);
    }
}
