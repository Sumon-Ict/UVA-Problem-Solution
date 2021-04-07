#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
     int x1,x2,x3,y1,y2,y3,sx,sy;
     printf("\nPlease enter the points of triangle: ");
     scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
     printf("\nPlease enter the translation factor: ");
     scanf("%d%d",&sx,&sy);
     int ck;
     printf("\nPlease enter Choice\n1 For Increment\n2 for Decrement.\n");
     scanf("%d",&ck);
     int gd=DETECT,gm;
     initgraph(&gd,&gm,NULL);
     line(x1,y1,x2,y2);
     line(x2,y2,x3,y3);
     line(x3,y3,x1,y1);
     if(ck){
         line(x1*sx,y1*sy,x2*sx,y2*sy);
         line(x2*sx,y2*sy,x3*sx,y3*sy);
         line(x3*sx,y3*sy,x1*sx,y1*sy);
     }else {
        line(x1/sx,y1/sy,x2/sx,y2/sy);
         line(x2/sx,y2/sy,x3/sx,y3/sy);
         line(x3/sx,y3/sy,x1/sx,y1/sy);
     }
     delay(10000);
     closegraph();
     return 0;
}



