#include<iostream>
using namespace std;
int main()
{
    int m,n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        m=a*2;
        if(m<=b&&m<=c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
