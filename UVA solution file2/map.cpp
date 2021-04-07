#include<bits/stdc++.h>
using namespace std;
/*void result()
{
    mymap.insert(make_pair(1,0));
    for(long int i=2;i<=2000000;i++)
    {
        long a=i;
        unsigned long int b=mymap[i-1];
        unsigned long int c=a+b;
        mymap.insert(make_pair(i,c));

    }
}*/
int main()
{
    map<long int,unsigned long int>mymap;
    mymap.insert(make_pair(1,0));
    for(long int i=2;i<=2000000;i++)
    {
        long a=i;
        unsigned long int b=mymap[i-1];
        unsigned long int c=a+b;
        mymap.insert(make_pair(i,c));

    }
   int testcase;
   long int a,b;
   scanf("%ld",&testcase);
   while(testcase--)
   {
       scanf("%ld%ld",&a,&b);
       unsigned long int c=mymap[a-1];
       unsigned long int d=mymap[b];
       unsigned  long int  r=d-c;
       cout<<r<<endl;

   }

}
