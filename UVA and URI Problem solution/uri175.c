#include<stdio.h>
int main()
{
    int i,j;
    int N[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0;i<20;i++)
    {
        j=19-i;
        printf("N[%d] = %d\n",i,N[j]);

    }
    return 0;
}
