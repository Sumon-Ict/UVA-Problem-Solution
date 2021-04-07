#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k,array[55],d=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>array[i];
    int max=array[k-1];
    for(int i=0;i<n;i++)
    {
        if(array[i]>=max&&max!=0)
        d++;
        else if(array[i]>max&&max==0)
            d++;

    }
    cout<<d<<endl;
}
