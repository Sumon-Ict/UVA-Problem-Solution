#include<bits/stdc++.h>
using namespace std;
vector<long int>ncr[100000];

void result()
{
    ncr[0][0]=1;
    int m=1000003;

    int limncr=100000;

    for(int i=1;i<=limncr;i++)
    {
        for(int j=0;j<=limncr;j++)
        {
            if(j>i)
                ncr[i][j]=0;
            else if(j==i||j==0)
                ncr[i][j]=1;
            else ncr[i][j]=(ncr[i-1][j-1]+ncr[i-1][j])%m;

        }
    }

}
int main()
{

  result();
  int testcase;
  scanf("%d",&testcase);
  int n,r;
  for(int i=1;i<=testcase;i++)
  {
      scanf("%d %d",&n,&r);

      printf("Case %d: %ld\n",i,ncr[n][r]);
  }



}
