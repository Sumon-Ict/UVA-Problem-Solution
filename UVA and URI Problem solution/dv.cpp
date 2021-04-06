#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[1000000];
        long long int len,j;
        int t;
        cin>>t;
        for(int i=0;i<t;i++)
        {
           int d=0;
            cin>>str;
            len=strlen(str);
            for(j=len-5;j<len;j++)
            {
                cout<<str[j];
                //d++;
                //if(d==5)
                   // break;
            }
        }

}
