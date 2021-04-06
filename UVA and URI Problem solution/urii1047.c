#include<stdio.h>
int main()
{
    int a,b,c,d,h,m,t1,t2,t;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    t2=(c+24)*60+d;
    t1=a*60+b;
    t=t2-t1;
    if(t>(24*60))
    {
        t=t-24*60;
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else
    {
        t=t;
        h=t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }

}
