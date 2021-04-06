#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==1)
            cout<<"blue"<<endl;
        if(a%2==0)
            cout<<"red"<<endl;
    }
    return 0;
}
