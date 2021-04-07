#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f;

    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f))
    {
        float sum=a+b+c+d+e+f;
        float v=(float)sum/2;

        if(a+b+c==v||a+b+d==v||a+b+e==v||a+b+f==v||a+c+d==v||a+c+e==v||a+c+f==v||a+d+e==v||a+d+f==v||a+e+f==v||b+c+d==v||b+c+e==v||b+c+f==v||b+d+e==v||b+d+f==v||b+e+f==v||c+d+e==v||c+d+f==v||c+e+f==v||d+e+f==v)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
