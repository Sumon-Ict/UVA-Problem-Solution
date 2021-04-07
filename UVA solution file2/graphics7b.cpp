#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void flood(int x,int y){
    if(getpixel(x,y)==0){
        putpixel(x,y,RED);
        flood(x+1,y);
        flood(x-1,y);
        flood(x,y+1);
        flood(x,y-1);
    }
}
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    rectangle(50,50,300,300);
    flood(51,51);
    delay(1000);
    closegraph();
    return 0;
}





