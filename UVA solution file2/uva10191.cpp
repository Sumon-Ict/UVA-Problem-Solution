#include<bits/stdc++.h>
using namespace std;
int main()
{


int s;
int t=0;
string str;

while(scanf("%d",&s)==1)
{
    if(s==0)continue;

vector<int>v[102];

v[0].push_back(0);
v[0].push_back(600);
v[s+1].push_back(1080);
int h1,m1,h2,m2;
char ch1,ch2;

for(int i=1;i<=s;i++)
{
   cin>>h1>>ch1>>m1>>h2>>ch2>>m2;
   getline(cin,str);

    v[i].push_back(h1*60+m1);
    v[i].push_back(h2*60+m2);

}
int d,max=0;
int totalt;

for(int i=1;i<=s+1;i++)
{
    //cout<<v[i][0]<<" "<<v[i][1]<<endl;
    d=v[i][0]-v[i-1][1];

    if(d>max)
    {
        max=d;
        totalt=v[i][0];
    }
}


if(max<60)
{
//int dh=max/60;
int dm=max%60;

totalt=totalt-max;

int sh=totalt/60;
int sm=totalt%60;

if(sm<10)
    printf("Day #%d: the longest nap starts at %d:0%d and will last for %d minutes.\n",++t,sh,sm,dm);
else if(sm>=10)
  printf("Day #%d: the longest nap starts at %d:%d and will last for %d minutes.\n",++t,sh,sm,dm);
}

else if(max>=60)
{
    int dh=max/60;
int dm=max%60;

totalt=totalt-max;

int sh=totalt/60;
int sm=totalt%60;
if(sm<10)
    printf("Day #%d: the longest nap starts at %d:0%d and will last for %d hours and %d minutes.\n",++t,sh,sm,dh,dm);
else if(sm>=10)
printf("Day #%d: the longest nap starts at %d:0%d and will last for %d hours and %d minutes.\n",++t,sh,sm,dh,dm);
}
}
}
