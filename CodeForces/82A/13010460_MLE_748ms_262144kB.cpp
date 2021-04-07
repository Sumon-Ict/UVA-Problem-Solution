#include<bits/stdc++.h>

using namespace std;
int main()
{
    queue<string>myq;
    myq.push("Sheldon");
    myq.push("Leonard");
    myq.push("Penny");
    myq.push("Rajesh");
    myq.push("Howard");
    int n;
    string s;
    cin>>n;
    for(int i=0;i<myq.size();i++)
    {
        if(i==n-1)
           {

        cout<<myq.front()<<endl;
        break;
         }
        else
        {
            s=myq.front();
            myq.pop();
            myq.push(s);
            myq.push(s);
        }
    }
}
