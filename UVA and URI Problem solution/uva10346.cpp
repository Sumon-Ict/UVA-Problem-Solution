#include<iostream>
using namespace std;
int main()
{
    long long int n,k,r;
    while(cin>>n>>k)
    {
    long long m=n;

    long long int sum=0;
    while(1)
    {
        r=m/k;
        sum+=r;
        m=r;
        if(m==0||m<k)
            break;

    }
    long long int t=n+sum;
    cout<<t<<endl;
    }
}
