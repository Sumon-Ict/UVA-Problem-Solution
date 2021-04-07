#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  L;
    string str;
    while(scanf("%d",&L)&&L!=0)
    {
        vector<int>v1,v2;

        cin>>str;
        int d,i;
        for( i=0;i<str.size();i++)
        {
            if(str[i]=='Z')
            {
            printf("0\n");

            break;
            }

            if(i==str.size()-1)
            {
                for(int j=0;j<str.size();j++)
                {
                    if(str[j]=='R')
                        v1.push_back(j);
                    else if(str[j]=='D')
                        v2.push_back(j);
                }

                int minimum=2000000;

                for(int i=0;i<v1.size();i++)
                {
                    int a=v1[i];

                    for(int j=0;j<v2.size();j++)
                    {
                        int D=abs(a-v2[j]);
                        if(D<minimum)
                            minimum=D;
                    }
                }
                printf("%d\n",minimum);
            }


        }

    }
}
