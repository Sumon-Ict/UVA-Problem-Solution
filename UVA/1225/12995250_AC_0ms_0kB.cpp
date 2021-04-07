#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dataset;
    int n;
    cin>>dataset;
    while(dataset--)
    {
        cin>>n;
        int d=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0;
        for(int i=1;i<=n;i++)
        {
            int m=i;
            while(m!=0)
            {
                int r=m%10;
                if(r==0)
                    d++;
               else if(r==1)
                    d1++;
               else if(r==2)
                    d2++;
             else if(r==3)
                    d3++;
             else if(r==4)
                d4++;
              else  if(r==5)
                    d5++;
            else if(r==6)
                    d6++;
            else if(r==7)
                    d7++;
            else if(r==8)
                    d8++;
             else if(r==9)
                    d9++;
                m=m/10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",d,d1,d2,d3,d4,d5,d6,d7,d8,d9);

    }

}
