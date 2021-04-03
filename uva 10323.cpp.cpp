#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return n*(n-1)*factorial(n-2);
}
int main()
{
    int n;
    ll result;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<=7&&n>=0)
            printf("Underflow!\n");
            else if(n<0&&n%2==0)
        printf("Underflow!\n");
        else if(n>13)
        printf("Overflow!\n");
        else if(n<0&&n%2!=0)
            printf("Overflow!\n");
        else
        {
            result=factorial(n);
            printf("%lld\n",result);
        }
    }
    return 0;
}
