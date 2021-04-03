#include<bits/stdc++.h>
using namespace std;
int multiply(int x,int res[],int ressize)
{
    int carry=0;
    for(int i=0;i<ressize;i++)
    {
        int prod=res[i]*x+carry;
        res[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        res[ressize]=carry%10;
        carry=carry/10;
        ressize++;
    }
    return ressize;
}

void factorial(int n)
{
   int res[800];
   res[0]=1;
   int ressize=1;
   for(int i=2;i<=n;i++)
    ressize=multiply(i,res,ressize);
  int  d=0;
int d1=0;
int d2=0;
int d3=0;
int d4=0;
int d5=0;
int d6=0;
int d7=0;
int d8=0;
int d9=0;
for(int j=ressize-1;j>=0;j--)
    {
       if(res[j]==0)
            d++;
        else if(res[j]==1)
            d1++;
       else if(res[j]==2)
            d2++;
        else if(res[j]==3)
            d3++;
        else if(res[j]==4)
            d4++;
        else if(res[j]==5)
            d5++;
        else if(res[j]==6)
            d6++;
        else if(res[j]==7)
            d7++;
        else if(res[j]==8)
            d8++;
        else
            d9++;
    }
    printf("%d!--\n",n);
    cout<<"   ";
    printf("(0)%4d (1)%4d (2)%4d (3)%4d (4)%4d\n",d,d1,d2,d3,d4);
    //printf("%2d");
    cout<<"   ";
    printf("(5)%4d (6)%4d (7)%4d (8)%4d (9)%4d\n",d5,d6,d7,d8,d9);


}
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
    factorial(n);
    }
}

