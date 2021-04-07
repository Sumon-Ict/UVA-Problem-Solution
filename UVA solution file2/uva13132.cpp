#include<bits/stdc++.h>
using namespace std;
int coprime(int n)
{
    if(n==1)
        return 0;

    int result=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n=n/i;
            result=result-result/i;
        }
    }
    if(n>1)
        result=result-result/n;
        return result;

}
int main()
{
   int testcase,n;
   scanf("%d",&testcase);
   while(testcase--)
   {
       scanf("%d",&n);
       int r=coprime(n);
       printf("%d\n",r);

   }
}
