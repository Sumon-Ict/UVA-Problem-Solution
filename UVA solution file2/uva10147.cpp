#include<bits/stdc++.h>
using namespace std;
int digitcount( long long int n)
{
   long long int result=1;
    int d=1;
    while(result%n!=0)
    {
        result=(result*10+1)%n;
        d++;

    }
    return d;
}
int main()
{
   long long  int n;
    while(scanf("%lld",&n)==1)
    {
        int r=digitcount(n);
        printf("%d\n",r);

    }
}
