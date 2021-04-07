#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,Y1,Y2,a1,a2;
    string str1,str2;
    map<string,int>mymap;
    mymap["January"]=1;
    mymap["February"]=2;
    mymap["March"]=3;
    mymap["April"]=4;
    mymap["May"]=5;
    mymap["June"]=6;
    mymap["July"]=7;
    mymap["August"]=8;
    mymap["September"]=9;
    mymap["October"]=10;
    mymap["November"]=11;
    mymap["December"]=12;
    char ch;
    int t=0;
    scanf("%d",&testcase);
    while(testcase--)
    {
        cin>>str1>>a1>>ch>>Y1;
        cin>>str2>>a2>>ch>>Y2;

    int d=0;
    int c;
    for(int i=Y1;i<=Y2;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
        {
            d++;
            c=i;
            break;
        }
    }

    int Y;
    Y=Y2-c;
    if(d==0)
        printf("Case %d: 0\n",++t);

        else if(d!=0)
        {
            Y=Y2-c;
            //int r=1+Y/4;

            if(mymap[str1]>2&&mymap[str2]<=12)
                printf("Case %d: %d\n",++t,Y/4);

           else if(mymap[str1]>2&&(mymap[str2]==1))
               printf("Case %d: %d\n",++t,Y/4);

            else if(mymap[str1]>2&&mymap[str2]==2&&a2<29)
            printf("Case %d: %d\n",++t,Y/4);

           else if(mymap[str2]==2&&a2<29)
            printf("Case %d: %d\n",++t,Y/4);

            else if(mymap[str1]==2&&a1==29&&mymap[str2]==2&&a2==29)
                printf("Case %d: %d\n",++t,1+Y/4);


            else

            printf("Case %d: %d\n",++t,Y/4);

        }


    }
}
