#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm, " ");
setcolor(BLUE);
    for(int j=500;j>=0;j--)
    {
     for(int i=500;i>=-350;i--)
        {
cleardevice();
            ellipse(200+i,200,0,360,100,40);
   line(300+i, 200, 350+i,170);
     line(350+i,170,350+i,230);
     line(350+i,230,300+i,200);
            circle(125+i,190,4);
            delay(10);
        }
    }
getch();
closegraph();
}


