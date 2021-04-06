#include<stdio.h>
int main()

{
int i,j ,l,k=40;
clrscr( );
for(i=1;i<=9;i+=2)
{
for(l=1;l<=k;l++)
printf(" " );
for(j=1;j<=i;j++);
printf("%d",j);
printf("\n");
k=k-2;
}
getch( );
}
