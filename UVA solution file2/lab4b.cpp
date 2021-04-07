#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void boundary(int x,int y){
    if(getpixel(x,y)!=WHITE && getpixel(x,y)!=RED){
        putpixel(x,y,RED);
        boundary(x+1,y);
        boundary(x-1,y);
        boundary(x,y+1);
        boundary(x,y-1);
    }
}
int main(){
    int x,y,r;
    printf("\nPlease enter the value of center coordinate: ");
    scanf("%d%d",&x,&y);
    printf("\nPlease enter the radius of circle: ");
    scanf("%d",&r);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    line(320,0,320,640);
    line(0,240,640,240);
    circle(x,y,r);
    boundary(x,y);
    delay(100000);
    closegraph();
    return 0;
}


