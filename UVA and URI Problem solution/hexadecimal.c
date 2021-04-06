#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,hex[1000],p,r,j;
    char base16[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    printf("enter the decimal number for converting\n");
    scanf("%d",&n);
    int m=n;
    do
    {
        r=n%16;
        hex[i]=r;
        i++;
        n=n/16;
    }while(n!=0);
    printf("the equivalent value of the decimal number %d\n",m);
    for(j=i-1;j>=0;j--)
    {
        p=hex[j];
        printf("%c",base16[p]);

    }
}
