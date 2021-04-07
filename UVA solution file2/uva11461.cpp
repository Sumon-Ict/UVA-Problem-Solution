#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;

    while(scanf("%d%d",&a,&b))
    {
        if(a==0&&b==0)
            break;

            int d=0;
            for(int i=a;i<=b;i++)
            {
                int r=sqrt(i);
                if(r*r==i)
                    d++;
            }
        printf("%d\n",d);

    }
}
