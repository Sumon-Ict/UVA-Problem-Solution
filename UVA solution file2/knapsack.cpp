#include<bits/stdc++.h>
using namespace std;
int knapsack(int W,int wt[],int val[],int n)
{
    int i,w;
    int k[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
                k[i][j]=0;
            else if(wt[i-1]<=j)
                k[i][j]=max(val[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
            else
                k[i][j]=k[i-1][j];
        }
    }
    return k[n][W];
}

int main()
{

   int testcase,N,W;
   int value[1001];
   int weight[1001];
   scanf("%d",&testcase);
   while(testcase--)
   {
       scanf("%d",&N);
       for(int i=0;i<N;i++)
       {
           scanf("%d %d",&value[i],&weight[i]);
       }

       int G;
       int sum=0;

       scanf("%d",&G);
       while(G--)
       {

       scanf("%d",&W);
       int r=knapsack(W,weight,value,N);
       sum+=r;

       }
    printf("%d\n",sum);

   }



}
