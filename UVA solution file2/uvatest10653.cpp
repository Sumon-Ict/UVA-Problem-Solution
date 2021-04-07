#include<bits/stdc++.h>
using namespace std;
int dis[1004][1004];
queue<pair<int,int> >q;

int R,C;

bool valid(int r,int c)
{
    if(r>=0&&r<=R&&c>=0&&c<=C)
        return true;
    else
        return false;

}

void valuecal(int row,int col,int v)
{
    dis[row][col]=v+1;
    q.push(make_pair(row,col));

}

void reset()
{
    for(int i=0;i<1004;i++)
        memset(dis[i],-1,sizeof(dis[i]));

}
int main()
{
    int r,c;
     int rownumber,startr,bom,pos;

    while(scanf("%d %d",&R,&C))
          {
              if(R==0&&C==0)
                break;

                reset();

               scanf("%d",&rownumber);
               for(int i=0;i<rownumber;i++)
               {
                   scanf("%d %d",&startr,&bom);

                   for(int j=0;j<bom;j++)
                   {
                       scanf("%d",&pos);

                       dis[startr][pos]=2e9;
                   }
               }

             /*  for(int i=0;i<R;i++)
               {
                   for(int j=0;j<C;j++)

                    printf("  %d",dis[i][j]);
                   printf("\n");

               }*/

       int srcR,srcC,desR,desC;

       scanf("%d %d %d %d",&srcR,&srcC,&desR,&desC);

       dis[srcR][srcC]=0;
       q.push(make_pair(srcR,srcC));

       while(!q.empty())
       {
           int row=q.front().first;
           int col=q.front().second;
           q.pop();

           if(valid(row-1,col)&&dis[row-1][col]<0)
            valuecal(row-1,col,dis[row][col]);

           if(valid(row+1,col)&&dis[row+1][col]<0)
            valuecal(row+1,col,dis[row][col]);

           if(valid(row,col-1)&&dis[row][col-1]<0)
            valuecal(row,col+1,dis[row][col]);

           if(valid(row,col+1)&&dis[row][col+1]<0)
            valuecal(row,col+1,dis[row][col]);
       }


       printf("%d\n",dis[desR][desC]);

          }


}

