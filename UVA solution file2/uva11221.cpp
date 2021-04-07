#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase,t=0;
  string str;
  //vector<char>v;
  //vector<char>v1[10000];

  scanf("%d",&testcase);
  getchar();
  while(testcase--)
  {
     getline(cin,str);

    // cout<<str<<endl;
    string str1,str2,str3,str4,str5;
    vector<char>v;
  vector<char>v1[10000];

     for(int i=0;i<str.size();i++)
     if(str[i]>='a'&&str[i]<='z')
     {
      v.push_back(str[i]);
     str1+=str[i];

     }
    // cout<<str1<<endl;
   // cout<<str1<<endl;

      int lenth=v.size();
      float l=(float)sqrt(lenth);


      if(l*l==lenth)
      {
          int d=0;
         for(int i=0;i<l;i++)
         {
             for(int j=0;j<l;j++)
                v1[i].push_back(v[d++]);
         }

          for(int i=0;i<l;i++)
          {
              for(int j=0;j<v1[i].size();j++)

                {
                    str2+=v1[i][j];
                 str3+=v1[j][i];
                 }
          }
          for(int i=l-1;i>=0;i-- )
          {
              for(int j=l-1;j>=0;j--) // making str3 string for comparing
              {
                  str4+=v1[i][j];
                  str5+=v1[j][i];
                  }
          }
         /* cout<<str2<<endl;
          cout<<str3<<endl;
          cout<<str4<<endl;
          cout<<str5<<endl;*/

          if(str1.compare(str2)==0&&str2.compare(str3)==0&&str4.compare(str5)==0&&str1.compare(str4)==0)

           {
            printf("Case #%d:\n",++t);
            printf("%.f\n",l);
           }
           else
           {
               printf("Case #%d:\n",++t);
               printf("No magic :(\n");
           }
  }
   else if(l*l!=lenth)
   {
       printf("Case #%d:\n",++t);
               printf("No magic :(\n");
   }
  // getchar();
}
}
