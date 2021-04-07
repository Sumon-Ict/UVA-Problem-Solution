#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int x,y;
    double ang;
    printf("\nPlease enter The Coordinate of The First Pixel: ");
    scanf("%d%d",&x,&y);
    printf("\nPlease enter The Rotation Angle: ");
    scanf("%lf",&ang);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    int xx=getmaxx()/2;
    int yy=getmaxy()/2;
    line(320,0,320,640);
    line(0,240,640,240);
    putpixel(x+xx,yy-y,RED);
    ang*=acos(-1)/180.0;
    int x1=((x*cos(ang))-(y*sin(ang)));
    int y1=((x*sin(ang))+(y*cos(ang)));
    putpixel(x1+xx,yy-y1,RED);
    delay(10000);
    closegraph();
    return 0;
}

