#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        int d=0;
        int c=0;
        do{
            c=(c*10+1)%n;
            d++;
        }while(c!=0);

        printf("%d\n",d);

    }
}
