#include<bits/stdc++.h>
using namespace std;
int res(int n)
{
    int r=19+(n-1)*9;
    int b=(int)log10(r)-1;
    r=r+b*9;
    return r;

}
int main()
{
    int n;

    scanf("%d",&n);

        int number=res(n);
        cout<<number<<endl;
}
