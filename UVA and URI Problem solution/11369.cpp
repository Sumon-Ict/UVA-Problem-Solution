#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=20007;
int a[N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        sort(a,a+n);
        ll sum=0;
        for(int i=n-3;i>=0;i-=3){
                sum+=a[i];
        }
        printf("%d\n",sum);
    }
}
