#include<stdio.h>
int main()
{
    int i=0;
    char ch;
    printf("enter a string \n");
    while((ch=getchar())!='\n')
    {
        i++;
    }
    printf("the string  above entered\n");
    printf("the length of the string %d \n",i);


}
