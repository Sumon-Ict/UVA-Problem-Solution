#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a;
    cin>>n;

    //printf("%d\n",n&a);
    for(int b=0;b<(1<<n);b++)
    {

        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(b&(1<<i))
            {
               // printf("%d  ",(b&(1<<i)));
                v.push_back(i+1);
            }

        }
        for(int j=0;j<v.size();j++)
            printf("%d ",v[j]);
         printf("\n");
    }
}
