#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i=0,n;
    cin>>n;
    while(i!=1000);
    {
        for(int j=0;j<n;j++)
            {
                printf("N[%d] = %d\n",i,j);
                if(j=n-1)
                    j=0;
            }
            i++;


    }
}
