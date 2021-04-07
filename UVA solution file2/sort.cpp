#include<bits/stdc++.h>
using namespace std;
bool comparator(char a,char b)
{
    if(tolower(a)==tolower(b))
        return a<b;
    return tolower(a)<tolower(b);
}
int main()

{
    string str;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        cin>>str;
        sort(str.begin(),str.end(),comparator);

        do{
                cout<<str<<endl;

        }while(next_permutation(str.begin(),str.end(),comparator));
    }
}
