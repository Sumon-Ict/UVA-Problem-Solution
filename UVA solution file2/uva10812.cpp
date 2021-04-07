#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s,d;

    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f",&s,&d);

        float a=(s+d)/2;

        float b=s-a;

        if(b<0)
            printf("impossible\n");
        else
        {
            a=max(a,b);
            b=min(a,b);

            printf("%.0f %.0f\n",a,b);
        }
    }
}
