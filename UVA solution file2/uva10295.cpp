#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    int a;
    string str,str1;
    scanf("%d %d",&m,&n);
    getchar();
    map<string,int>mymap;


    for(int i=0;i<m;i++)
    {
        cin>>str>>a;
        mymap[str]=a;
    }
    for(int i=0;i<n;i++)
    {

        long long int sum=0;
        while(cin>>str1)
        {
            if(str1==".")break;

            else
            {

                transform(str1.begin(),str1.end(),str1.begin(),::tolower);
                if(mymap.count(str1)>0)
                    sum+=mymap[str1];

            }
        }
        cout<<sum<<endl;

    }
}
