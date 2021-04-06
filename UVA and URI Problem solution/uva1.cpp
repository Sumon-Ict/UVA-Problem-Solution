#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            cout<<'>'<<endl;
        if(a<b)
            cout<<'<'<<endl;
        if(a==b)
            cout<<'='<<endl;
    }
    return 0;
}
