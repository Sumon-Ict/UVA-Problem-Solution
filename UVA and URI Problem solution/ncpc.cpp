#include<iostream>
using namespace std;
int main()
{
    long long int sum=0;

    for(int i=1;i<=365;i++)
    {
        for(int j=i;j<=i;j++)
            sum+=j;
    }
    cout<<sum<<endl;
}
