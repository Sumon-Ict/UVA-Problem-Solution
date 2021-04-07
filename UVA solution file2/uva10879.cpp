#include<bits/stdc++.h>
using namespace std;
int main()
{

    int testcase;
    int n;
    scanf("%d",&testcase);
    for(int k=1;k<=testcase;k++)
    {
        scanf("%d",&n);
        int d=0;
        int A,B,C,D;

            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0)
            {
                A=i;
                B=n/i;
                d=1;
                break;
            }
            }
            if(d==1)
            {
                for(int j=A+1;j*j<=n;j++)
                    if(n%j==0)
                {

                    C=j;
                    D=n/j;
                    break;
                }
            }
       printf("Case #%d: %d = %d * %d = %d * %d\n",k,n,A,B,C,D);

    }
}
