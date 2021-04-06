#include<stdio.h>
long long int count(int a,int b,int c)
{
    long long int total;
    if(((a%400==0)||((a%4==0)&&(a%100!=0)))&&(b<=5||b==11))
        {


         total=a*12*365+b*31+c;
    return(total);
    }
    if(((a%400==0)||((a%4==0)&&(a%100!=0)))&&(b>5)&&(b!=11))
        {total=a*12*365+b*30+c;
    return(total);}

}
int main()
{
    int y,m,d,y1,m1,d1,n,i;

    long long int day,day1,result;
    scanf("%d%d%d",&y,&m,&d);
    day=count(y,m,d);

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&y1,&m1,&d1);
        day1=count(y1,m1,d1);
        result=day-day1;
        printf("%lld\n",result);

    }
}

