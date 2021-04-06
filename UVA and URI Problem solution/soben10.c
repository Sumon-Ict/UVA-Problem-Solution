#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,d,m,sum;
    char c;
    float average;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d %c",&d,c);
        while(c!='\n')
        {
            scanf("%d",&m);
            getchar(c);
            sum+=m;
        }
        average=(float)sum/d;
    }
}
