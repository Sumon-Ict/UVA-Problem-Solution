#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,m;
     int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a);
    b=sqrt(a);
    m=b*b;
if(m==a)
    printf("YES\n");
else
    printf("NO\n");
    }
    return 0;
}
