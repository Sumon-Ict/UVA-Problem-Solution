
#include <graphics.h>
#include <stdio.h>
int main()
{
     int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3;
     int xt,yt;
     int gd=DETECT,gm;
     initgraph(&gd,&gm," ");
     setcolor(BLUE);
     printf("\nEnter the 1st coordinate for the triangle: ");
     scanf("%d%d", &x1, &y1);
     printf("\nEnter the 2nd coordinate for the triangle: ");
     scanf("%d%d", &x2, &y2);
     printf("\nEnter the 3rd coordinate for the triangle: ");
     scanf("%d%d", &x3, &y3);;
     line(x1,y1,x2,y2);
     line(x2,y2,x3,y3);
     line(x3,y3,x1,y1);
     printf("\n Enter the translation factor: ");
     scanf("%d%d",&xt,&yt);
     nx1=x1+xt;
     ny1=y1+yt;
     nx2=x2+xt;
     ny2=y2+yt;
     nx3=x3+xt;
     ny3=y3+yt;
     line(nx1,ny1,nx2,ny2);
     line(nx2,ny2,nx3,ny3);
     line(nx3,ny3,nx1,ny1);
     getch();
     closegraph();
}




