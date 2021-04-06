#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(1)

    {
        cin>>n;

        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
        int sum=0;
    for(int i=1;i<n;i++)
        if(n%i==0)
    {
        sum+=i;
    }
    if(sum==n)
        printf("%5d  PERFECT\n",n);
    if(sum<n)
        printf("%5d  DEFICIENT\n",n);
    if(sum>n)
        printf("%5d  ABUNDANT\n",n);
        }
    }
}

