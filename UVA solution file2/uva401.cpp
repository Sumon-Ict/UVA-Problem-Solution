#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<char,char>m;
    //map<char,int>mymap;

    m.insert(make_pair('E','3'));
    m.insert(make_pair('3','E'));

    m.insert(make_pair('J','L'));
    m.insert(make_pair('L','J'));

    //m.insert(make_pair('L','J'));
    //m.insert(make_pair('o','0'));

    m.insert(make_pair('S','2'));
    m.insert(make_pair('2','S'));

    m.insert(make_pair('5','Z'));
    m.insert(make_pair('Z','5'));
    m.insert(make_pair('o','0'));

    string str,str1;

    while(cin>>str)
    {

  str1=str;
  reverse(str1.begin(),str1.end());
  //cout<<str1<<endl;

  if(str1.compare(str)==0)
  {

      string s1=str;
       for(int i=0;i<str.size();i++)
    {
        if(str[i]=='E'|| str[i]=='L'||str[i]=='o'||str[i]=='S'||str[i]=='Z'||str[i]=='3'||str[i]=='J'||str[i]=='2'||str[i]=='5')

        str[i]=m[str[i]];
    }

    reverse(str.begin(),str.end());
    if(s1.compare(str)==0)
    {
        cout<< s1<<" -- is a mirrored palindrome."<<endl<<endl;
       // cout<<str<<endl;

    }
    else if(s1.compare(str)!=0)

    {
        cout<<s1<<" -- is a regular palindrome."<<endl<<endl;
        //cout<<str<<endl;
    }

  }
  else if(str1.compare(str)!=0)
  {

  string s1=str;
       for(int i=0;i<str.size();i++)
    {
        if(str[i]=='E'|| str[i]=='L'||str[i]=='o'||str[i]=='S'||str[i]=='Z'||str[i]=='3'||str[i]=='J'||str[i]=='2'||str[i]=='5')

        str[i]=m[str[i]];
    }

    reverse(str.begin(),str.end());

if(s1.compare(str)==0)
    {
        cout<<s1<<" -- is a mirrored string."<<endl<<endl;
        //cout<<str<<endl;
    }
else if(s1.compare(str)!=0)
   {
    cout<<s1<<" -- is not a palindrome."<<endl<<endl;
    //cout<<str<<endl;
  }
    }
}
}
