#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum=0;
    for(i=5;i<500;i++)
    {
        if(i%2==0&&i%4!=0&&i%6!=0)
        {
            sum=sum+i;
        }


    }
    printf("the sum is  %d",sum);
}
