#include<bits/stdc++.h>
using namespace std;
int main()
{

   string str1,str2;
   int D,D1,M,M1,Y,Y1,t1,t2,t,d=0;

   int testcase;
   scanf("%d",&testcase);
   while(testcase--)
   {
       getchar();
       cin>>str1>>str2;
       if((str1.compare(str2))==0)
        printf("Case #%d: 0\n",++d);
       else
       {

       D=(str1[0]-'0')*10+(str1[1]-'0');
       M=(str1[3]-'0')*10+(str1[4]-'0');
       Y=(str1[6]-'0')*1000+(str1[7]-'0')*100+(str1[8]-'0')*10+(str1[9]-'0');
       D1=(str2[0]-'0')*10+(str2[1]-'0');
       M1=(str2[3]-'0')*10+(str2[4]-'0');
       Y1=(str2[6]-'0')*1000+(str2[7]-'0')*100+(str2[8]-'0')*10+(str2[9]-'0');

       t1=D+M*30+Y*365;

       t2=D1+M1*30+Y1*365;


       t=t1-t2;
       if(t<0)
       printf("Case #%d: Invalid birth date\n",++d);
       if(t>0)
       {
           int r=t/365;
           if(r>130)
            printf("Case #%d: Check birth date\n",++d);
           else if(r<=130)
            printf("Case #%d: %d\n",++d,r);
       }
       }
   }
}
