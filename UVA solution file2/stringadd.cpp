#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str,str1;
int n;
   cin>>n;
   getchar();
   while(n--)
   {
       cin>>str;
       str1=str1.append(str);
      // str1+=str;
   }
   cout<<str1<<endl;
}
