#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    int T,n,d,D;
    string str,str1;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        scanf("%d",&n);
        getchar();
        while(n--)
        {

            cin>>str>>d;
            m[str]=d;
        }
        cin>>D;
        getchar();
        cin>>str1;
        if(m.count(str1)>0)
        {

            int r=m[str1];
            if(r<=D)
                printf("Case %d: Yesss\n",i+1);
            else if(r>D&&r<=D+5)
                printf("Case %d: Late\n",i+1);
            else
                printf("Case %d: Do your own homework!\n",i+1);
        }
        else
        printf("Case %d: Do your own homework!\n",i+1);
        m.clear();




    }
}
