#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr1[300001];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int r=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]!=arr1[j])
                r=max(r,j-i);
        }
    }
    cout<<r<<endl;

}
