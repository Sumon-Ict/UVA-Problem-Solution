#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
int gd=DETECT,gm,x,y,r,xx,yy;
initgraph(&gd,&gm,"");
printf("Please Enter Center Coordinate of The Circle=");
scanf("%d%d",&x,&y);
printf("Enter The Radius Of The Circle=");
scanf("%d",&r);
circle(x,y,r);
printf("Enter The Translation Center Coordinate of The Circle=");
scanf("%d%d",&xx,&yy);
circle(x+xx,y+yy,r);
getch();
closegraph();
}


