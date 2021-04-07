#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    double v,n;
    string str,str1;
    map<string,double>m;
    scanf("%d %d",&a,&b);
    getchar();
    for(int i=0;i<a;i++)
    {
        cin>>str>>v;
        m[str]=v;
    }
    for(int i=0;i<b;i++)
    {
        double sum=0;
        string s;
        while(cin>>str1)
        {

            if(str1=="<"||str1==">"||str1=="<="||str1==">="||str1=="=")
            {
               s=str1;
                break;
            }
            else
                sum+=m[str1];
        }
        cin>>n;
        if(s=="<")
        {
            if(sum<n)
                printf("Guess #%d was correct.\n",i+1);
            else
                printf("Guess #%d was incorrect.\n",i+1);
        }
        else if(s==">")
        {
            if(sum>n)
             printf("Guess #%d was correct.\n",i+1);
            else
                printf("Guess #%d was incorrect.\n",i+1);

        }
        else if(s=="<=")
        {

            if(sum<=n)
             printf("Guess #%d was correct.\n",i+1);
            else
                printf("Guess #%d was incorrect.\n",i+1);
        }
        else if(s==">=")
        {

            if(sum>=n)
                printf("Guess #%d was correct.\n",i+1);
            else
                printf("Guess #%d was incorrect.\n",i+1);

        }
        else if(s=="=")
        {

            if(sum==n)
              printf("Guess #%d was correct.\n",i+1);
            else
                printf("Guess #%d was incorrect.\n",i+1);
        }

    }
}
