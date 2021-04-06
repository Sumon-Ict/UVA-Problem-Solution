#include<stdio.h>
int main()
{
    int i,d=0,v=0,s=0;

    char str[1888];
    printf("enter a string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
      {

    if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4')
    {
        d++;
    }




    if(str[i]=='a'||str[i]=='b'||str[i]=='c')
    {
        v++;
    }
    if(str[i]==' ')
    {
        s++;
    }
      }

    printf("the number of the digit %d \n",d);
    printf("thr numbrt iof thr voent %d \n",v);
    printf("the number of the space %d \n",s);



}
