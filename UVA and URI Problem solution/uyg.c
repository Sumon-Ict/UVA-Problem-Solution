#include <stdio.h>
#include <conio.h>

void main(){
     int i,j,k,num;
     clrscr();
     printf("*****DIGIT TRIANGLE*****\n");
     printf("Enter number : ");
     scanf("%d",&num);
     for(i=1;i<=num;i++){
     for(k=num;k>=i;k--)
         printf("%c",' ');
     for(j=1;j<=i;j++)
             printf("%3d",i);
         printf("\n");
      }

getch();
}
