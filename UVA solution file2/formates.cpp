#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>a;
    int d=0;
   while(a!=1)
   {
       a=a-1;
       if(a>12)
        break;
       d++;
   }
   cout<<d;
}
