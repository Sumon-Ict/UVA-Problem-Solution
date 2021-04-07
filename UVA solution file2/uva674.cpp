#include<bits/stdc++.h>
using namespace std;
int res(int s[],int m,int n)
{
    int table[n+1];

    memset(table,0,sizeof(table));

    table[0]=1;
    for(int i=0;i<m;i++)
    {
        for(int j=s[i];j<=n;j++)
            table[j]+=table[j-s[i]];

    }
    return table[n];

}
int main()
{
    int arr[]={1,5,10,25,50};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n;
    while(scanf("%d",&n)==1)
    {
        int result=res(arr,m,n);

    printf("%d\n",result);

    }


}
