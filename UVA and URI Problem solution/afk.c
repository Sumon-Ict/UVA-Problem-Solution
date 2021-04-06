#include<stdio.h>
int main()
{
    int i,j,k,m;

    for(i=0;i<5;i++)
    {
        for(j=4;j>=i;j--)


           printf("   ");
        for(k=i;k>=0;k--)
            printf("%3d",k);
        for(m=1;m<=i;m++)
            printf("%3d",m);

    printf("\n");
    }

}
