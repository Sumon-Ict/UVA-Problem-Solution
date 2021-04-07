#include<bits/stdc++.h>
using namespace std;
int lps(string str)
{
    int n=str.size();
    int L[n][n];
    for(int i=0;i<n;i++)
        L[i][i]=1;

    for(int c=2;c<=n;c++ )
    {
        for(int i=0;i<n-c+1;i++)
        {
            int j=i+c-1;
            if(str[i]==str[j]&&c==2)
                L[i][j]=2;
            else if(str[i]==str[j])
            L[i][j]=L[i+1][j-1]+2;
            else
                L[i][j]=max(L[i][j-1],L[i+1][j]);
        }
    }
    return L[0][n-1];
}
int main()
{
   int testcase;
   string str;
   scanf("%d",&testcase);
   getchar();
   while(testcase--)
   {
       cin>>str;
       int result=lps(str);

       printf("%d\n",result);


   }

}
