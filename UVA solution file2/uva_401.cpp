#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))

    {

        string st=str;
    reverse(st.begin(),st.end());

    cout<<str<<endl;
    cout<<st<<endl;
    if(st!=str)
    {

       string s=str;

       for(int i=0;i<s.size();i++)
       {

            if(s[i]=='3')
            s[i]='E';
            else if(s[i]=='J')
                s[i]='L';
            else if(s[i]=='S')
                s[i]='2';
            else if(s[i]=='Z')
                s[i]='5';


       }
       string s1=s;
       reverse(s.begin(),s.end());

       if(s1==s)
        print("-- is a mirrored string./n");
       else
        printf("is not a palindrome./n");





    }



    }
}
