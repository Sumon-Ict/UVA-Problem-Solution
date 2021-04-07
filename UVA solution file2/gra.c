#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    int x1,x2,x3,y1,y2,y3,xx1,xx2,xx3,yy1,yy2,yy3,xx,yy;
    float ang;
    initgraph(&gd,&gm,"");
    xx=getmaxx()/2;
    yy=getmaxy()/2;
    for(int i=1; i<=2*xx; i++)
        putpixel(i,yy,CYAN);
    for(int i=1; i<=2*yy; i++)
        putpixel(xx,i,CYAN);
    printf("Enter The Coordinate of The First Pixel=");
    scanf("%d%d",&x1,&y1);
    putpixel(x1+xx,yy-y1,RED);
    printf("Enter The Rotation Angle=");
    scanf("%f",&ang);
    ang=(ang*(3.1416/180.0));
    xx1=((x1*cos(ang))-(y1*sin(ang)));
    yy1=((x1*sin(ang))+(y1*cos(ang)));
    putpixel(xx1+xx,yy-yy1,RED);
    getch();
    closegraph();
    return 0;
}
