#include<stdio.h>
#include<string.h>
int main()
{
    int h1,h2,m1,m2,s1,s2,d1,d2;
    int d,h,m,s;
    long long int t,t1,t2;
    char str1[100],str2[100];
    char c;
    scanf("%s%d",str1,&d1);
     scanf("%d %c %d %c %d",&h1,&c,&m1,&c,&s1);

    scanf("%s%d",str2,&d2);
    scanf("%d %c %d %c %d",&h2,&c,&m2,&c,&s2);
    t2=d2*24*3600+h2*3600+m2*60+s2;
    t1=d1*24*3600+h1*3600+m1*60+s1;
    t=t2-t1;
    d=t/(24*3600);
    t=t%(24*300);
    h=t/3600;
    t=t%3600;
    m=t/60;
    t=t%60;
    s=t;
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);


}
