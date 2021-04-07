#include<bits/stdc++.h>
using namespace std;
int comb(int n,int k)
{
    int C[k+1];
    memset(C,0,sizeof(C));

    C[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=min(i,k);j>0;j--)
            C[j]=C[j]+C[j-1];

    }
    return C[k];
}
int main()
{
    int r=comb(5,1);
    cout<<r;

}
