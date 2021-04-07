#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
#define  n 1502
ll ugly[n];
void finduglynumber()
{
    //int n;
    //ll ugly[n+1];
    int  i2=0,i3=0,i5=0;
    ll multiple_2=2;
    ll multiple_3=3;
    ll multiple_5=5;
  ll  nextuglynumber;
    ugly[0]=1;
   // cout<<ugly[0]<<endl;
    for(int i=1;i<=n;i++)
    {
        nextuglynumber=min(multiple_2,
                           min(multiple_3,multiple_5));

        ugly[i]=nextuglynumber;
       // cout<<ugly[i]<<endl;

        if(nextuglynumber==multiple_2)
        {
            i2=i2+1;
            multiple_2=ugly[i2]*2;
        }
        if(nextuglynumber==multiple_3)
        {
            i3=i3+1;
            multiple_3=ugly[i3]*3;
        }
        if(nextuglynumber==multiple_5)
        {
            i5=i5+1;
            multiple_5=ugly[i5]*5;

        }
    }
    //return nextuglynumber;
}
int main()
{
    finduglynumber();
    ll result=ugly[1500-1];
 // ll result= finduglynumber(1500);
  printf("The 1500'th ugly number is %ld.\n",result);
   //cout<<result;*/


}
