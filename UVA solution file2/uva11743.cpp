#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string str;

    scanf("%d",&n);
    getchar();
    int sum1,sum2;
    while(n--)
    {
        getline(cin,str);

        //cout<<str<<endl;

        int s1=((str[0]-'0')*2)/10+((str[0]-'0')*2)%10;

        int s2=((str[2]-'0')*2)/10+((str[2]-'0')*2)%10;
        int s3=((str[5]-'0')*2)/10+((str[5]-'0')*2)%10;
        int s4=((str[7]-'0')*2)/10+((str[7]-'0')*2)%10;
        int s5=((str[10]-'0')*2)/10+((str[10]-'0')*2)%10;
        int s6=((str[12]-'0')*2)/10+((str[12]-'0')*2)%10;
        int s7=((str[15]-'0')*2)/10+((str[15]-'0')*2)%10;
        int s8=((str[17]-'0')*2)/10+((str[17]-'0')*2)%10;

        sum1=s1+s2+s3+s4+s5+s6+s7+s8;
        //cout<<sum1;

        sum2=(str[1]-'0')+(str[3]-'0')+(str[6]-'0')+(str[8]-'0')+(str[11]-'0')+(str[13]-'0')+(str[16]-'0')+(str[18]-'0');


    //cout<<sum1<<" "<<sum2;
   int  sum=sum1+sum2;
   if(sum%10==0)

    printf("Valid\n");
   else
    printf("Invalid\n");



       // cout<<s1;

    }
}
