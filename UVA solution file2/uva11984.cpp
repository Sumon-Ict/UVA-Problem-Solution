#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c,d;
    scanf("%d",&t);

    int test=0;
    while(t--)
    {
        scanf("%d%d",&c,&d);

        float f=(float)(9*c)/5+32;

         float f1=(float)f+d;

         float c1=(float)((f1-32)*5)/9;

         printf("Case %d: %0.2f\n",++test,c1);


    }
}
