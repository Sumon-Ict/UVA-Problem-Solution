#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long income;
    double tax;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        tax=0;
      cin>>income;

      if(income>=180000)
      {
        income=income-180000;

        if(income<300000)
        {
            tax+=(double)income*10/100;
           // cout<<tax<<endl;
           // break;
        }
        else if(income>=300000)
        {
            tax+=(double)300000*10/100;
            //cout<<tax<<endl;
            income-=300000;

            if(income<400000)
            {
                tax+=(double)income*15/100;
               // cout<<tax<<endl;
               // break;

            }
            else
            {
                tax+=(double)400000*15/100;
                income-=400000;

                if(income<300000)
                {
                    tax+=(double)income*20/100;
                   // cout<<tax<<endl;
                   // break;
                }
                else
                {
                    tax+=(double)300000*20/100;
                   // cout<<tax<<endl;
                    income-=300000;

                    tax+=(double)income*25/100;
                   // cout<<tax<<endl;
                }
            }

        }
      }
      //cout<<tax<<endl;

    if(tax>0&&tax<2000)
        printf("Case %d: 2000\n",i,tax);
    else
       printf("Case %d: %0.0lf\n",i,ceil(tax));


    }
}
