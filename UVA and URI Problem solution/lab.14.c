#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100;i<200;i++)
    {
        if(i%7==0)
            sum=sum+i;
    }
    printf("sum of all numbers between 100 to 200  is \n%d",sum);


}
