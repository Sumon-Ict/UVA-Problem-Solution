#include<stdio.h>
int main()
{
    int i=0,j,r,d,binary[1000];
    printf("enter a decimal number \n");
    scanf("%d",&d);
    int n=d;
    while(d!=0)
    {
        r=d%2;
        binary[i]=r;
        i++;
        d=d/2;

    }
    printf("the equaivalent binary of the decimal number %d\n ",n);

    for(j=i-1;j>=0;j--)
        printf("%d",binary[j]);

}
