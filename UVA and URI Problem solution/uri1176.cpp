#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
     long long int fib[65];
    fib[0]=0;
     fib[1]=1;
     int n,j;
    for(int i=2;i<=65;i++)
    {
       fib[i]=fib[i-2]+fib[i-1];

    }
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>j;
       // printf("Fib(%d) = %d\n",j,fib[j]);
        cout<<"Fib("<<j<<") = "<<fib[j]<<endl;
//cout << "Fib(" << f << ") = " << fib[f] << "\n";
    }
}
