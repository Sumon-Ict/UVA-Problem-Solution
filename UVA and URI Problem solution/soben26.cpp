#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(m>=80&&m<=100)
            printf("Case %d: A+\n",i);
    if(m>=75&&m<=79)
        printf("Case %d: A\n",i);
    if(m>=70&&m<=74)
        printf("Case %d: A-\n",i);
    if(m>=65&&m<=69)
        printf("Case %d: B+\n",i);
    if(m>=60&&m<=64)
    printf("Case %d: B\n",i);
    if(m>=55&&m<=59)
        printf("Case %d: B-\n",i);
    if(m>=50&&m<=54)
        printf("Case %d: C\n",i);
    if(m>=45&&m<=49)
        printf("Case %d: D\n",i);
    if(m>=0&&m<=44)
        printf("Case %d: F\n",i);


    }
}
