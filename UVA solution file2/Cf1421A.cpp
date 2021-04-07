#include<bits/stdc++.h>
using namespace std;
int main()
{

    int testcase;
    cin>>testcase;
    while(testcase--)
    {

        long result,a,b,x;

        cin>>a>>b;
        x=a;
        if(b>a)
            result=a;
        else
        {

            while(x!=0)
            {
                if(a%x==0&&x%b!=0)
                {
                    result=x;
                    break;
                }
                x--;
            }
        }
        cout<<result<<endl;

    }
}
