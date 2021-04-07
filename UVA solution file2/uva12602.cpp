#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    m['A']=0; m['B']=1;m['C']=2;m['D']=3;m['E']=4;m['F']=5;m['G']=6;m['H']=7;m['I']=8;m['J']=9;
    m['K']=10;m['L']=11;m['M']=12;m['N']=13;m['O']=14;m['P']=15;m['Q']=16;m['R']=17;m['S']=18;m['T']=19;
    m['U']=20;m['V']=21;m['W']=22;m['X']=23;m['Y']=24;m['Z']=25;


    int testcase;
    scanf("%d",&testcase);
    getchar();
    string str;
    while(testcase--)
    {
        cin>>str;

        int s=m[str[0]]*26*26+m[str[1]]*26+m[str[2]];

        int sum=0;

        for(int i=4;i<8;i++)
        {
            int a=str[i]-'0';
            sum=sum*10+a;
        }

        int d=abs(s-sum);
        if(d<=100)


    printf("nice\n");
    else
        printf("not nice\n");

        //cout<<s<<endl;
        //cout<<sum<<endl;


    }
}
