#include<bits/stdc++.h>
using namespace std;
const int N=500007;
int a[N];
int b[N];
set<int>s;
int main(){
    int n;
    while(scanf("%d",&n) && n){
        int k=0;
        memset(a,0,sizeof a);
        while(n--){
            int x,y;
            scanf("%d%d",&x,&y);
            if(a[x]==0)b[k++]=x;
            if(a[y]==0)b[k++]=y;
            a[x]++;a[y]--;
        }
        bool ck=0;
        for(int i=0;i<k;i++){
            if(a[b[i]]){
                ck=1;
                break;
            }
        }
        if(ck)printf("NO\n");
        else printf("YES\n");
    }
}
