#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<float>marks;
    float a;
    for(int i=0;i<10;i++)
    {
        cin>>a;
        marks.push_back(a);

    }
    for(int i=0;i<10;i++)
    cout.precision(3);
        cout<<marks[i]<<" ";
}
