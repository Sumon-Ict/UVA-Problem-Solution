#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int b=0;b<n;b++)
    {
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            for(int j=a;j>i;j--)
                cout<<' ';
            for(int k=1;k<=i;k++)
                cout<<'*';
            for(int m=1;m<i;m++)
                cout<<'*';
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
