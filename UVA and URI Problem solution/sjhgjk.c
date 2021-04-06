#include<stdio.h>
#include<string.h>
int main()
{
    char *name[5];

    int i,j;

    for(i=0;i<3;i++)
    {
        printf("enter  the name[%d]=",i);
        gets(name[i]);
        //scanf("%s",name[i]);

    }
    for(j=0;j<3;j++)

        printf("\n name[%d]=%s",j,name[j]);

    return 0;

}
