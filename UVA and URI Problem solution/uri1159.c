#include<stdio.h>
int main()
{
    int a,i;

    while(scanf("%d",&a)==1)
    {
        int sum=0,d=0;
        if(a==0)
            break;
        else
        {
        for(i=a; ;i++)
        {


            if(i%2==0)
            {
                sum+=i;
                d++;
            }
            if(d==5)
                break;
        }
        printf("%d\n",sum);
    }

}
}
