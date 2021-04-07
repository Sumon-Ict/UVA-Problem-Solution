#include<bits/stdc++.h>
using namespace std;
int result(int sum)
{
    int s=0;
    while(sum!=0)
    {
       int r=sum%10;
       s+=r;
       sum=sum/10;
    }
    return s;
}
int main()

{
    map<char,int>mymap;
    int v1=1;
    int v2=1;

    for(int i=65;i<=90;i++)
    {
        char ch=char(i);
        mymap[ch]=v1++;

    }
    for(int i=97;i<=122;i++)
    {
        char ch=char(i);
        mymap[ch]=v2++;
    }

  string s1,s2;
  while(getline(cin,s1)&&(getline(cin,s2)))
  {
      int r1,r2,sum1=0,sum2=0;
      float r,value;
      for(int i=0;i<s1.size();i++)
      {
          if(s1[i]>='a'&&s1[i]<='z'||s1[i]>='A'&&s1[i]<='Z')
          sum1=sum1+mymap[s1[i]];

      }
      for(int j=0;j<s2.size();j++)
      {
          if(s2[j]>='a'&&s2[j]<='z'||s2[j]>='A'&&s2[j]<='Z')
            sum2=sum2+mymap[s2[j]];

      }

      //cout<<sum2<<endl;
      r2=result(sum2);
      //cout<<r2<<endl;
      while(r2>9)
        r2=result(r2);
      //cout<<r2<<endl;

      r1=result(sum1);
      while(r1>9)
        r1=result(r1);
        //cout<<r1<<endl;

        r=(float)r2/r1*100;

        printf("%.2f %%\n",r);





  }

}
