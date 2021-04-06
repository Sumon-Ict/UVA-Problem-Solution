#include<stdio.h>
int main()
{
    int i,upper=0,lower=0;
    char a[1000];
    printf("enter the  string\n");
    gets(a);
    int len=strlen(a);
    for(i=0;i<=len-1;i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            upper++;
        if(a[i]>='a'&&a[i]<='z')
            lower++;

    }
    printf("the total number of the uppecsde %d\n",upper);
    printf("the total number of the lower %d\n",lower);




}
