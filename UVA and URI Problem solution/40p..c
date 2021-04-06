# include <stdio.h>
# include <conio.h>
main( )
{
int i,j;
char name[80];
//clrscr( );
printf(" enter a string");
gets(name);
for(i=0;i<80 && ((name [i]=
getchar())!='\n');i++);
if(name[i]=='\n')
name[i]='\0';
for(j=i;j>=0;j--)
putchar(name[j]);
printf("is the reverse of given string");
getch( );
}

