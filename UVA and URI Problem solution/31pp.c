#include<stdio.h>
int main()
{
   int d=0,m=0,s=0;
   char c;
   printf("enter a string\n");
   while((c=getchar())!='\n')
    if(c>='A'&&c<='Z')
    d++;
     else if(c>='a'&&c<='z')
    s++;
   else
    m++;
    printf("the capital letters of the string %d \n",d);
    printf("the small letters of the  string %d\n",s);
    printf("the special characters of the string %d\n",m);




}
