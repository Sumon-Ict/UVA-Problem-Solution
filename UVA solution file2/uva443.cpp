#include<bits/stdc++.h>
using namespace std;
typedef unsigned long int ll;
ll Hubnum[5845];
void findhub()
{

  int i2=0,i3=0,i5=0,i7=0;
  ll multiple_2=2;
  ll multiple_3=3;
  ll multiple_5=5;
  ll multiple_7=7;
  Hubnum[0]=1;

  for(int i=1;i<5845;i++)
  {
      ll nextnum=min(multiple_2,min(multiple_3,min(multiple_5,multiple_7)));

      Hubnum[i]=nextnum;

      if(nextnum==multiple_2)
      {
          i2++;
          multiple_2=Hubnum[i2]*2;
      }
      if(nextnum==multiple_3)
      {
         i3++;
         multiple_3=Hubnum[i3]*3;

      }
      if(nextnum==multiple_5)
      {
          i5++;
          multiple_5=Hubnum[i5]*5;
      }
      if(nextnum==multiple_7)
      {
          i7++;
          multiple_7=Hubnum[i7]*7;
      }
  }

}
int main()
{
    findhub();

    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int m=n;
        int a=n%10;
        n=n/10;
        int b=n%10;

        if(a==1&&b==1)
             printf("The %dth humble number is %d.\n",m,Hubnum[m-1]);
        else if(a==1&&b!=1)
             printf("The %dst humble number is %d.\n",m,Hubnum[m-1]);
        else if(a==2&&b==1)
        printf("The %dth humble number is %d.\n",m,Hubnum[m-1]);
        else if(a==2&&b!=1)
            printf("The %dnd humble number is %d.\n",m,Hubnum[m-1]);
        else if(a==3&&b==1)
            printf("The %dth humble number is %d.\n",m,Hubnum[m-1]);
        else if(a==3&&b!=1)
            printf("The %drd humble number is %d.\n",m,Hubnum[m-1]);
        else
        printf("The %dth humble number is %d.\n",m,Hubnum[m-1]);
    }
}
