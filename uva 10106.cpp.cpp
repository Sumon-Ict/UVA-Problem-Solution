#include<bits/stdc++.h>
using namespace std;
string multiply(string str1,string str2)
{
    int n1=str1.length();
    int n2=str2.size();
    vector<int>result(n1+n2,0);
    int n1location=0;
    int n2location;
    for(int i=n1-1;i>=0;i--)
    {
        int integer_n1=(str1[i]-'0');
        n2location=0;
        int carry=0;
        for(int j=n2-1;j>=0;j--)
        {
            int integer_n2=str2[j]-'0';
            int sum=integer_n1*integer_n2+result[n1location+n2location]+carry;
            result[n1location+n2location]=sum%10;
            carry=sum/10;
            n2location++;
        }
        if(carry>0)
        result[n1location+n2location]+=carry;
        n1location++;
    }
    int i=result.size()-1;
    string str;
    while(i>=0&&result[i]==0)
        i--;
    if(i==-1)
        return "0";
    while(i>=0)
    {
        str.push_back(result[i]+'0');
        i--;
    }
    return str;
}
int main()
{
   string a,b,r;
   while(cin>>a>>b)
   {
       r=multiply(a,b);
       for(int i=0;i<r.size();i++)
        cout<<r[i];
       cout<<endl;
   }

}
