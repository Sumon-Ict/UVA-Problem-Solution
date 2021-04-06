#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    //string str;
    char str[55];
    int n,len;
    cin>>n;
    for(int i=0;i<n;i++)
    {
       int d=0;
        cin>>str;
        len=strlen(str);
        for(int j=0;j<=len;j++)
        {
            if(str[j]=='r')

            {
               d++;

            }

        }
        if(d==0)
        printf("Vely easy\n");
        else
         printf("Not vely easy\n");


    }
}
