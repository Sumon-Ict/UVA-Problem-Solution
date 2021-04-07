#include<bits/stdc++.h>
long int sod[2000001];
using namespace std;
void result()
{

    for(long int i=1;i<2000001;i++)
        sod[i]=i;
}
int main()
{
    result();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%ld\n",sod[n]);
    }
}
