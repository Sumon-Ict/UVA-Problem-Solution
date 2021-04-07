#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()

{
int gd=DETECT,gm;
initgraph(&gd, &gm, " ");
    for(int j=1;j<=200;j++)
    {
        for(int i=0;i<200;i++)
        {
cleardevice();
 line(250+i,200-i,200+i,250-i);
 line(200+i,250-i,275+i,325-i);
 line(225+i,325-i,300+i,250-i);
 line(300+i,250-i,250+i,200-i);
 line(225+i,325-i,275+i,325-i);
 line(200+i,250-i,250+i,235-i);
 line(250+i,235-i,300+i,250-i);
    line(250+i,235-i,20,800-i);
 line(250+i,200-i,250+i,300-i);
            i+=1;
            delay(100);
        }
    }
getch();
closegraph();
}

