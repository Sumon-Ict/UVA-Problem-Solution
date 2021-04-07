#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
string array[5]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
int n;
cin>>n;
while(n>5)
{
    n=n/2-2;
}
string result=array[n-1];
cout<<result<<endl;

}
