#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<char,char>m;
    m.insert(make_pair('=','-'));
    m.insert(make_pair('-','0'));
    m.insert(make_pair('0','9'));

    for(int i=9;i>=2;i--)
    {
        char ch1=i+'0';
        char ch2=i-1+'0';
        m.insert(make_pair(ch1,ch2));

    }
    m.insert(make_pair('1','`'));
    m.insert(make_pair('\\',']'));
     m.insert(make_pair(']','['));
     m.insert(make_pair('[','P'));
      m.insert(make_pair('P','O'));
       m.insert(make_pair('O','I'));
        m.insert(make_pair('I','U'));
         m.insert(make_pair('U','Y'));
          m.insert(make_pair('Y','T'));
           m.insert(make_pair('T','R'));
            m.insert(make_pair('R','E'));
             m.insert(make_pair('E','W'));
             m.insert(make_pair('W','Q'));
             m.insert(make_pair('\'',';'));

             m.insert(make_pair(';','L'));

             m.insert(make_pair('L','K'));
             m.insert(make_pair('K','J'));
             m.insert(make_pair('J','H'));
             m.insert(make_pair('H','G'));
             m.insert(make_pair('G','F'));
             m.insert(make_pair('F','D'));
             m.insert(make_pair('D','S'));
             m.insert(make_pair('S','A'));
             m.insert(make_pair('/','.'));
              m.insert(make_pair('.',','));
               m.insert(make_pair(',','M'));
                m.insert(make_pair('M','N'));
                 m.insert(make_pair('N','B'));
                  m.insert(make_pair('B','V'));
                   m.insert(make_pair('V','C'));
                    m.insert(make_pair('C','X'));
                     m.insert(make_pair('X','Z'));
                     m.insert(make_pair(' ',' '));
                     m.insert(make_pair('\n','\n'));

char ch;
while(scanf("%c",&ch)!=EOF)
{
  //for(int i=0;i<str.size();i++)
    cout<<m[ch];
}




}
