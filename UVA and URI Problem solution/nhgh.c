#include<stdio.h>
int main()
{
    char name[56l];
    printf("enter the name\n");
    scanf("%[^\n]",name);
    printf("%s",name);

}
