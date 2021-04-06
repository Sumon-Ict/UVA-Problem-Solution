#include<bits/stdc++.h>
using namespace std;
int main(){

    int i=0;
    double p=0,q;
    for(i=0;i<=10;i++){
            q=1;
            if(t==2)cout<<21<<endl;
        for(int j=0;j<3;j++){
            if(p==0||p==1||t==2){
                printf("I=%d J=%d\n",(int)p,(int)(p+q));
            }
            else{
                //printf("I=%.1f J=%.1f\n",p,p+q);
            }
            q++;
        }
        p+=0.2;
    }


}
