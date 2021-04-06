#include<stdio.h>
int main()
{
    int i,upper=0,lower=0;
    char ch[188];
    printf("enter the string\n");
    gets(ch);
    i=0;
    while(ch[i]!='\0');
    {
        if(ch[i]>='A'&&ch[i]<='Z')
            upper++;
        if(ch[i]>='a'&&ch[i]<='z')
            lower++;
        i++;
    }
    printf("the number of uppercse %d\n",upper);
    printf("the number of lowercase %d\n",lower);



}
