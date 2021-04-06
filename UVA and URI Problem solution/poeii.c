#include<stdio.h>
int main()
{
    int i,n,j,temp;
    printf("enter the integer number \n");
    scanf("%d",&n);
    int a[n];
    printf("enter your data\n");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
              {
                  temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    printf("%d   ",a[i]);




}
}
