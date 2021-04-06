#include<iostream>
using namespace std;
int main()

{
    int a;
    long long int d;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>d;
        if(d%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;

    }
    return 0;

}
